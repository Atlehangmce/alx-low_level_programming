#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *binary);
void print_binary(unsigned long int num);
int get_bit(unsigned long int num, unsigned int index);
int set_bit(unsigned long int *num, unsigned int index);
int clear_bit(unsigned long int *num, unsigned int index);
unsigned int flip_bits(unsigned long int num1, unsigned long int num2);
int _atoi(const char *str);
int _putchar(char c);
int get_endianness(void);

#endif
