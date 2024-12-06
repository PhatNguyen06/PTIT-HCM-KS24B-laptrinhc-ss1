#include<stdio.h>

int main()
{
	float a;
	printf("Nhap a: ");
	scanf("%f", &a);
	float b;
	printf("Nhap b: ");
	scanf("%f", &b);
	
	int sum = a + b;
	int hieu = a - b;
	float tich = a * b;
	float thuong = a / b;
	
	printf("Tong a + b = %d\n", sum);
	printf("Hieu a - b = %d\n", hieu);
	printf("tich a * b = %2.f\n", tich);
	printf("thuong a / b = %2.f\n", thuong);
	
	return 0;
}
