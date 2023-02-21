
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block                               * Description: Write a program that prints all possible differe
 * Return: 0
 */
int main(void)                                    {
        int c;
        int d = 0;
                                                          while (d < 10)                                    {
                c = 0;
                while (c < 10)                                    {                                                         if (d != c && d < c)
                        {
                                putchar('0' + d);
                                putchar('0' + c);
                                if (c + d != 17)
                                {
                                        putchar(',');
100-print_comb3.c               5,64           Top
