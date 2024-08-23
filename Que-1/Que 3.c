//Sum of odd numbers

#include<stdio.h>
int main(){
	int number,i,sum=0;
	
//	Take integer from user
	printf("Enter The Number:");
 	scanf("%d",&number);
 	
// 	Implementation of Program
 	for(i=1;i<=number;i++){
 		if(i%2!=0){
 			sum+=i;
		 }
	 }
	 
//	 Print of sum of odd numbers
	 printf("Sum=%d",sum);
}
