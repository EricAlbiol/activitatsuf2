int validate(){
	int num;
	do{
		printf("Escriu un nombre enter: ");
		scanf("%d", &num);
	}while (num<0);
	return num;
}


int binari(int num){
	int residu, binari=0, elevado=1;
	do{
		residu=num%2;
		num=num/2;
		binari=binari+residu*elevado;
		elevado=elevado*10;
	}while (num>0);
	return binari;
}
