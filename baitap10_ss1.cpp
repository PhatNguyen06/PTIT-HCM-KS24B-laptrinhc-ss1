#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int so_dao_nguoc = 0;
	
	while(n > 0)
	{
		so_dao_nguoc = so_dao_nguoc * 10 + (n % 10);
		n = n/10;
	}
	printf("%d", so_dao_nguoc);
	
	
	return 0;
}
