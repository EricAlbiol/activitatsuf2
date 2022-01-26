/*
 * main.c
 *
 *  Created on: Jan 26, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "functions.h"

void main (){
	int size;
	printf("Quants numeros cabran el l'array: ");
	scanf("%d", &size);
	int num, i=0, array[size];
	do{
		num = numero();
		array[i]=num;
		i++;
	}while (i>size);
	mitjana(array, size);
	maxmin(array, size);
	for (i=0; i<size; i++){
		printf(array[i]);
	}
}

