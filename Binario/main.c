#include <stdio.h>
#include "function.h"

void main(){
	int num, num2;
	num = validate();
	num2 = binari(num);
	printf("El número en binari és ");
	printf("%d", num2);
}
