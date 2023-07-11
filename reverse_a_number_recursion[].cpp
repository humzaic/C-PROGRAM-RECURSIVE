//8.Write a program to reverse a number using recursion
#include<stdio.h>
int reverse_num(int num);

main()
{
	int num;
	printf("Enter Any Number:");
	scanf("%d",&num);
	int res = reverse_num(num);
	printf("%d",res);
}

int reverse_num(int num)
{
	int dig = num % 10;
	if(num < 10)
	return num;
	return dig  + reverse_num(num/10)* 10;
}
