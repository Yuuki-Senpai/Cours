/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 10 décembre 2020, 09:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
 * 
 */

/*
int main(int argc, char** argv) {
    float a,b,c,delta;
    if (argc !=4){
        printf("usage : %s a b c \n",argv[0]);
        exit(0);
    }
    sscanf(argv[1],"%f",&a);
    if (a == 0){
        printf("A doit etre diffèrent de 0 \n");
    }
    sscanf(argv[2],"%f",&b);
    sscanf(argv[3],"%f",&c);
    delta = b*b -4 *a*c;
    if (delta < 0){
        printf("pas de racine pour le polynome (%.2f)x^2 + (%.2f)x + (%.2f) = 0\n",a,b,c);
    }
    else{
        printf("le polynome (%.2f)x^2 + (%.2f)x + (%.2f) = 0 à pour racine\n",a,b,c);
        printf("x1 = %f \nx2 = %f\n",(-b-sqrtf(delta))/(2*a),(-b+sqrtf(delta))/(2*a));
    }
    
    
    return (EXIT_SUCCESS);
}
*/
int main(int argc, char** argv) {
    float a,b;
    
    if (argc !=4){
        printf("usage : signe a b\n");
        exit(0);
    }
    
    sscanf(argv[2],"%f",&a);
    sscanf(argv[3],"%f",&b);
    if(strcmp(argv[1],"+")==0){
        printf("%.2f + %.2f = %.2f\n",a,b,a+b);
        exit(0);
    }
    if(strcmp(argv[1],"-")==0){
        printf("%.2f - %.2f = %.2f\n",a,b,a-b);
        exit(0);
    }
    if(strcmp(argv[1],"/")==0){
        printf("%.2f / %.2f = %.2f\n",a,b,a/b);
        exit(0);
    }
    else{
        printf("%.2f * %.2f = %.2f\n",a,b,a*b);
        exit(0);
    }
    
    return (EXIT_SUCCESS);
}