/*
 * functions.c
 *
 *  Created on: 12 Jan 2022
 *      Author: eric
 */

int validate(){
	int num, i=0;
		do{
			printf("Escriu un nombre entre 10 i 5000:");
			scanf("%d", &num);
			i++;
		}while (num>5000 && i<3 || num<10 && i<3);
		if (num<10 || num>5000){
			printf("s'han acabat els intents");
		}
		else{
			return num;
		}
}
