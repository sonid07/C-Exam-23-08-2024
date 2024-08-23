//Implement formula

#include<stdio.h>
int main(){
	int r;
	float area;
	printf("Enter Radius:");
//	Area is being taken from user
	scanf("%d",&r);
	
//	Formula
	area=((3*3.14*r*r*r)/4);
	
//	Print Answer
	printf("Answer=%.3f",area);
}
