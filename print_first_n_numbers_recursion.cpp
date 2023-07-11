//1.	Write a program in C to print first n numbers using recursion.
#include<stdio.h>
int first_n_num(int num);
main()
{
 int num;
 printf("Enter any number:");
 scanf("%d",&num);
 first_n_num(num);
}
int first_n_num(int num)
{
	if(num>1)
	first_n_num(num-1);
	printf("%d,",num);
}
