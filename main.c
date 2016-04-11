/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: GOTHAM
 *
 * Created on April 10, 2016, 8:53 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

/*
 * 
 */
int main(int argc, char** argv) 
{
    unsigned int num;
    scanf("%d", &num, printf("\nEnter N for Fibonacci Recursive: "));
    for (unsigned int i = 0; i < num; i++)
    {
        printf("%d\t\n", fibonacci_recursive(i));
    }
    return (EXIT_SUCCESS);
}

