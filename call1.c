#include <stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return; 
}
int main()
{
	int a=100;
	int b=200;
	printf("Before Swapping the value of a - %d\n",a);
	printf("Before Swapping the value of b - %d\n",b);
	printf("\n");
	swap(&a,&b);
	printf("After Swapping the value of a - %d\n",a);
	printf("After Swapping the value of b - %d\n",b);
	return 0;
}


