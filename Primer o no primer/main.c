#include <stdio.h>
#include "function.h"

void main(){
	int num, num2;
	num = validate();
	num2 = primer(num);
	if (num2!=0){
		printf("El numero és primer");
	}
	else{
		printf("El número no és primer");
	}
}
