//5.Write a program in C to sum the digits of a given number using recursion.

#include<stdio.h>
int sum_the_digits(int num);

main()
{
	int num;
	printf("Enter any number:");
	scanf("%d",&num);
	int res = sum_the_digits(num);
	printf("The sum of digits of %d is %d", num, res);
}

int sum_the_digits(int num)
{
	int digit = num %10;
	if(num == 0)
	return 0;
	return digit + sum_the_digits(num/10);
}

