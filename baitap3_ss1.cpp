#include<stdio.h>

int main()
{
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	int b;
	printf("Nhap b: ");
	scanf("%d", &b);
	
	int sum = a + b;
	printf("Tong cua %d + %d = %d", a, b, sum);
	
	
	return 0;
}
