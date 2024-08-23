//Swap two varaibles Without third variable

#include<stdio.h>
int main(){
	int a=10,b=20,c;
	
	printf("Before Swap a=%d b=%d\n",a,b);
// Swap of two variables without third variable
	a=a+b;
	b=a-b;
	a=a-b; 
	
//	Print of two variables after swap
	printf("After Swap a=%d b=%d\n",a,b);
}
