/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 octobre 2020, 09:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned long long int grain,multiple;
    multiple = 1;
    grain =0;
    for(int x =1;x < 64;x++){
        multiple = multiple * 2;
        grain = grain + multiple;
    }
    grain = grain +1;
    printf("Le nombre de grain est au total de %llu", grain);
    return (EXIT_SUCCESS);
}

