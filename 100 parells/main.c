/*
 * main.c
 *
 *  Created on: Jan 27, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void main(){
    int llistaNumeros[SIZE], llistaNumerospar[SIZE2];
    int j=1;
    for (int i = 1; i < SIZE+1; i++) {
    llistaNumeros[i]=i;
    if (llistaNumeros[i]%2==0) {
        llistaNumerospar[j] = llistaNumeros[i];
        j++;
     }
 }
    mostrar(llistaNumerospar, SIZE2);
}


