int validate(){
	int num;
	do{
		printf("Escriu un nombre enter: ");
		scanf("%d", &num);
	}while (num==1 || num<=0);
	return num;
}


int primer(int num){
	int count=2, primer;
	do{
		primer = num%count;
		count=count+1;
	}while (num>count || primer!=0);
	return primer;
}
