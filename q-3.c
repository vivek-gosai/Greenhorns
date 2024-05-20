#include<stdio.h>
main(){
	float temp;
	
	printf("Enter today's  temperature :");
	scanf("%f",&temp);
	int f=9.5*temp+32;
	printf("Fahrenheit=%d",f);
}