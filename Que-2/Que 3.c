//Print reverse number

#include<stdio.h>
int main(){
	int i,number,reverse,reminder;
	
//	Intger is being taken from user
	printf("Enter number:");
	scanf("%d",&number);
	
// 	Implementation of Program
	for(i=number;number!=0;number=number/10){
	reminder=number%10;
	reverse=reverse*10+reminder;
	}
//	Print of reversed number
		printf("%d",reverse);
}
