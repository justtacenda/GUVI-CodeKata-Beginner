//Sum of 2 numbers odd/even
#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if((m+n)&1)
	printf("odd");
	else
	printf("even");
	return 0;
}
