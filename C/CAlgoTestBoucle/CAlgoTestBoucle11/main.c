/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: rleroy
 *
 * Created on 7 octobre 2020, 10:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main()
{
    int annee;
    printf("Entrez une année: ");
    scanf("%d",&annee);
    if(annee % 4 == 0)
    {
        if( annee % 100 == 0)
        {
            if ( annee % 400 == 0)
                printf("%d est une année bissextile", annee);
            else
                printf("%d pas une année bissextile", annee);
        }
        else
            printf("%d est une année bissextile", annee );
    }
    else
        printf("%d pas une année bissextile", annee);
    return 0;
}
