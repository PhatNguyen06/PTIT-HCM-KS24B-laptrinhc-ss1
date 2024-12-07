#include<stdio.h>

int main()
{
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	int max;
	if(a > b) max = a;
	else max = b;
	
	for(int i = max; i < a*b; i++)
	{
		if(i % a == 0 && i % b == 0)
		{
			printf("\nBoi chung nho nhat cua a va b la %d", i);
			break;
		}
	}
	
	
	return 0;
}
