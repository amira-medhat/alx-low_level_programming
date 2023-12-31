#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _isupper(int c);

int mul(int a, int b);

int _putchar(char c);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

int print_digit(int n);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void printstr(char *str);

void FizzBuzz(void);

void print_triangle(int size);

int isprime(long int n, int firsttime);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _isdigit(char ch);

int _atoi(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *);

char *cap_string(char *);

char *leet(char *);

char *rot13(char *);

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);

#endif /* MAIN_H */
