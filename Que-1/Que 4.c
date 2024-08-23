//Minimum 3 numbers

#include<stdio.h>
 int main(){
 	 int a,b,c;
//	Take 3 numbers from user
 	printf("Enter the First Number:");
 	scanf("%d",&a);
 	printf("Enter the First Number:");
 	scanf("%d",&b);
 	printf("Enter the First Number:");
 	scanf("%d",&c);
// 	Implementation of Program
 	if(a<c){
		if(a<b){
			printf("Minimum num :%d",a);
		}
		else{
			printf("b");
		}
	}
	else if(b<c){
		printf("Minimum Num:%d",b);
	}
	else{
		printf("Minimum Num:%d",c);
	}
	
 }
