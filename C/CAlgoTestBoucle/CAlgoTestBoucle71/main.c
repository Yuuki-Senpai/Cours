#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float val,carre;
    carre = 1;
    printf("rentrez une valeur positif entière inférieur a 256 à convertire en binaire  : ");
    scanf("%f",&val);
    //trouve le carre supérieur a val
    while(carre < val){
        carre = carre * 2;
    }
     //trouve le carré inférieur ou égal  val
    if(carre > val){
        carre = carre /2;
    }
    //dans le cas ou le nombre ne serait pas un carré de 2 :
    if (val != carre){
        while (val !=0){
            if(val >= carre){
                printf("1");
                val = val-carre;
                carre = carre /2;
            }
            else{
                printf("0");
                carre = carre /2;
            }
        }
    }
    // si val est égal a carre
    else{
        printf("1");
        while (carre !=1){
            printf("0");
            carre = carre /2;
        }
    }
    return (EXIT_SUCCESS);
}


