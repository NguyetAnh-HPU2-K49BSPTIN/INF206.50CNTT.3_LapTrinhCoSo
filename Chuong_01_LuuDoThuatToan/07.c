#include "stdio.h"
int main()
{
	int N_SoNguyen;

	printf("Nhap N: ");
	scanf("%d",&N_SoNguyen);

	//Tinh tong S = 1/2+ 2/3+3/4+....n/n+1
	double Tong = 0.00;
	for(int i = 1; i <= N_SoNguyen; i++)
	{
		Tong = Tong + i / (i + 1.0);
	}

	printf("Tong: %lf\n",Tong);

}