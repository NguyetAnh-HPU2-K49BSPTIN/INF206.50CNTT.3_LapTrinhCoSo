#include "stdio.h"
int main()
{
	int N_SoNguyen;

	printf("Nhap N: ");
	scanf("%d",&N_SoNguyen);

	//Tinh tong S = 1/1x2+ 1/2x3+1/3.4+....1/nx(n+1)
	double Tong = 0.00;
	for(int i = 1; i <= N_SoNguyen; i++)
	{
		Tong = Tong + 1.0 / (i * (i + 1.0));
	}

	printf("Tong: %lf\n",Tong);

}