/*
 * functions.c
 *
 *  Created on: Jan 27, 2022
 *      Author: admin-pg
 */
#include <stdio.h>
#include "functions.h"

int introduccio(char *msg){
	int num;
	do{
		printf(msg);
		scanf("%d", &num);
	}while (num<1);
	return num;
}

int validar(char *msg2){
	int num;
	do{
		printf(msg2);
		scanf("%d", &num);
	}while (num<1 ||  num>50);
	return num;
}

void canvi(int *llistaNum, int Size){
	for (int i=0;i<Size-1;i++){
		for (int j=i+1;j<Size;j++){
			if (llistaNum[i]<llistaNum[j]){
				int canvi=llistaNum[i];
				llistaNum[i]=llistaNum[j];
				llistaNum[j]=canvi;
			}
		}
	}
}

void mostrar(int *llistaNum, int Size){
	printf("L'array ordenat és: [");
	for (int i=0;i<Size;i++){
		if(i!=Size-1){
			printf("%d", llistaNum[i]);
		}else{
		printf("%d", llistaNum[i]);
		}
	}
	printf("]");
}
