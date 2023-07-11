//2.Write a program in C to calculate the sum of numbers from 1 to n using.

#include<stdio.h>
int sum_of_first_n_num(int num);

main()
{
	int num;
	printf("Enter any Nth number:");
	scanf("%d",&num);
	int sum = sum_of_first_n_num(num);//Function call;
	printf("%d",sum);
}

sum_of_first_n_num(int num)//Called function;
{
	if(num>0)
	return num + sum_of_first_n_num(num-1);
}
