/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main (void)

{
	int mark1,mark2;
	float total;
	float Average;
	
	printf("Enter 1st number :");
	scanf("%d",&mark1);
	
	printf("Enter 2nd number :");
   scanf("%d",&mark2);
    
   total=mark1+mark2;
   Average =total/2;
    
   printf("Total is :%.2f\n",total);
	printf("Average is :%.2f",Average);
	
	
	return 0;
}


