/*
 * function.c
 *
 *  Created on: Jan 21, 2022
 *      Author: admin-pg
 */

int insereix(){
	int num;
	printf("Introdueix un nombre enter: ");
	scanf("%d", &num);
	return num;
}

void intercanvi(num, num2){
	int aux;
	aux=num;
	num=num2;
	num2=aux;
	printf("El valor del primer nombre és %d i el del segón nombre és %d", num, num2);
}
