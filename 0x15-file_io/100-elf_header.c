#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define MAX_LINE_LENGTH 1024

/**
 * error_exit - Exit the program with an error message.
 * @message: Error message to display.
 */
void error_exit(const char *message) {
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * read_elf_header - Read the ELF header from the file.
 * @fd: File descriptor of the ELF file.
 * @header: Pointer to an Elf64_Ehdr structure to store the header.
 */
void read_elf_header(int fd, Elf64_Ehdr *header) {
	if (read(fd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		error_exit("Cannot read ELF header from file");
}

/**
 * check_elf_magic - Check if the file is an ELF file based on its magic number.
 * @header: Pointer to an Elf64_Ehdr structure containing the header.
 */
void check_elf_magic(const Elf64_Ehdr *header) {
    if (header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3) {
        error_exit("Not an ELF file");
    }
}

/**
 * print_elf_header_info - Print the information contained in the ELF header.
 * @header: Pointer to an Elf64_Ehdr structure containing the header.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid\n");
            break;
    }

    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Sun Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("IBM AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("SGI Irix\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("Compaq TRU64 UNIX\n");
            break;
        case ELFOSABI_MODESTO:
            printf("Novell Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("OpenBSD\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("  Entry point address:               0x%ldx\n", (long)header->e_entry);
}
/**
  * main - program to copy text from file ti another file
  * @argc: number of passed arguments.
  * @argv: strings of passed arguments.]
  * Return: 0 on Success.
  */

int main(int argc, char **argv)
{
	const char *filename = argv[1];
	Elf64_Ehdr elf_header;
	int fd;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        error_exit("Cannot open file");
    }


    read_elf_header(fd, &elf_header);
    check_elf_magic(&elf_header);

    printf("ELF Header:\n");
    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}
