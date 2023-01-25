#include<stdio.h>
int main()
{
	int first,second,*p,*q,sum;
	printf("enter two integers to add");
	scanf("%d%d",&first,&second);
	p = &first;
	q = &second;
	sum = *p+*q;
	printf("sum of the integers is=%d",sum);
	return 0;
}
