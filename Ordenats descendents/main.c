/*
 * main.c
 *
 *  Created on: Jan 27, 2022
 *      Author: admin-pg
 */

#include <stdio.h>
#include "functions.h"

void main() {
	int Size;
	Size=validar(MSG);
	int llistaNum[Size];
	for (int i=0;i<Size;i++){
		llistaNum[i]=introduccio(MSG2);
	}
	canvi(llistaNum, Size);
	mostrar(llistaNum, Size);
}


