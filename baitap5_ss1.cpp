#include<stdio.h>

int main()
{
	float a;
	printf("Nhap a: ");
	scanf("%f", &a);
	
	if(a >=0 && a < 4)
	{
		printf("Khong dat");
	}
	else if(a <= 6)
	{
		printf("Trung binh");
	}
	else if(a <= 8)
	{
		printf("Kha");
	}
	else if(a <= 9)
	{
		printf("Gioi");
	}
	else if(a <= 10)
	{
		printf("Xuat sac");
	}
	else
	{
		printf("Nhap sai du lieu");
	}
	
	return 0;
}
