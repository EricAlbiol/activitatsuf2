/*
 * functions.c
 *
 *  Created on: Jan 27, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "functions.h"

void mostrar(int *llistaNumerospar, int *SIZE2){
    printf("L'array ordenat és: [");
    for (int j = 1; j < SIZE2+1;j++){
        if(j!=SIZE2){
            printf("%d, ", llistaNumerospar[j]);
        }
        else{
            printf("%d", llistaNumerospar[j]);
        }
    }
    printf("]");
}
