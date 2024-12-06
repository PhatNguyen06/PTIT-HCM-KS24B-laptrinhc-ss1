#include<stdio.h>

int main()
{
	float a, b;
	printf("Nhap a: ");
	scanf("%f", &a);
	
	printf("Nhap b: ");
	scanf("%f", &b);
	
	float x = -b/a;
	
	if(a == 0 && b == 0)
	{
		printf("Phuong trinh vo so nghiem");
	}
	else if(a == 0 && b != 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	else
	{
		printf("Phuong trinh co 1 nghiem duy nhat x = %.2f", x);	
	}
	
	return 0;
}
