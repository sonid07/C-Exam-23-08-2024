//Count digit

#include<stdio.h>
 int main(){
 	int num,count;
 	
//	Take integer form user
 	printf("Enter the Number:");
 	scanf("%d",&num);
// 	Implementation of Program	
 	while (num!=0){
		num/=10;
 		count++;
	 }
//	 Print of number of digits	 
	 	printf("The num of Digit is:%d",count);
 }
