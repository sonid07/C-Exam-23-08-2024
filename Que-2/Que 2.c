//Find age to cast vote

#include<stdio.h>
int main(){
	
//	Take age from user
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
// 	Age is being checked	
	if(age>18){
		printf("You are elegible to cast vote");
	}
	else{
		printf("You are not elegible to cast vote");
	}
}
