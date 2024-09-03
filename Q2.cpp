#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter the First number :");
	scanf("%d",&a);
	
	printf("Enter the Second number :");
	scanf("%d",&b);
	
	printf("Enter the Third number :");
	scanf("%d",&c);
	
	d=a;
	a=c;
	c=b;
	b=d;
	
	printf("The Value of first number is : %d \n",a);
	printf("The Value of Second number is : %d \n",b);
	printf("The Value of Third number is : %d \n",c);
	
	return 0;
}