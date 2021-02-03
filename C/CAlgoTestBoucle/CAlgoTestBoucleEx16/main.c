/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 14 octobre 2020, 10:46
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    double i,pi;
    long int n;
    pi = 1; 
    for (i= 3 ; i <= 1000000000 ; i = i+2){       
        if (n%2 ==0){pi= pi -(1/i);}
        else{pi= pi +(1/i);}
        n++;}
    pi = pi*4;
    printf(" %f",pi);
    return (EXIT_SUCCESS);
}

