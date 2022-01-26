/*
 * functions.c
 *
 *  Created on: Jan 26, 2022
 *      Author: admin-pg
 */

int value(){
	int num;
	printf("Introdueix un nobre enter: ");
	scanf("%d", &num);
	return num;
}

void numeros(num1){
	int acumulador=0, i=1;
	do {
	printf("%d", i);
	i++;
	acumulador=i+acumulador;
	}while(acumulador<num1);
}

