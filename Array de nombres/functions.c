/*
 * functions.c
 *
 *  Created on: Jan 26, 2022
 *      Author: admin-pg
 */
int numero(){
	int num;
	do{
	printf("Escriu un número del 0 al 10");
	scanf("%d", &num);
	}while (num<0 || num>10);
	return num;
}

void mitjana(*array, size){
	int mitjana=0, i=0;
	do{
	mitjana=mitjana+array[i];
	i++;
	}while (i<size);
	mitjana=mitjana/i;
	printf("La mitjana és %d", mitjana);
}

void maxmin(*array, size){
	int i=0, num, max;
	num=array[i];
	i++;
	do{
		if (num<array[i]){
			num=array[i];
		}
		else{
			i++;
		}
	}while (i<size);
	max=num;
	i=0;
	num=array[i];
	i++;
	do{
		if (num<array[i]){
			i++;
		}
		else{
			num=array[i];
		}
	}while (i<size);
	printf("El màxim és %d ", max);
	printf("i el mínim %s", num);
}
