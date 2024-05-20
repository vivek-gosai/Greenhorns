#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter your base salary :");
	scanf("%d",&a);
	printf("Enter your hra :");
	scanf("%d",&b);
	printf("Enter your da :");
	scanf("%d",&c);
	printf("Enter your ta :");
	scanf("%d",&d);
	
	 int gross_salary =a + b + c +d;
	 printf("gross_salary :%d",gross_salary);	
}  
