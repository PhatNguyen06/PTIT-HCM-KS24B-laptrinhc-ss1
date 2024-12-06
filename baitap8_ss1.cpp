#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	
	float denta = pow(b, 2) - 4*a*c;
	float x1, x2;
	
	if(denta < 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	else if(denta == 0)
	{
		x1 = x2 = -b / (2 * a);
		printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n", x1);
	}
	else
	{
		x1 = (-b + sqrt(denta)) / (2 * a);
		x2 = (-b - sqrt(denta)) / (2 * a);
		printf("Phuong trinh co 2 nghiem phan biet: %.2f va %.2f", x1, x2);
	}
	
	return 0;
}
