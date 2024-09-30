#include "stdio.h"
int main()
{
	int N_SoNguyen;

	printf("Nhap N: ");
	scanf("%d",&N_SoNguyen);

	//Tinh tong S = 1/2+1/4+....1/2n
	double Tong = 0.00;
	for(int i = 1; i <= N_SoNguyen; i++)
	{
		Tong = Tong + 1.0/(2.0*i);
		//vd i = 1 => S = 1/2
		//   i = 2 => S = 1/2 + 1/4
		//   i = 3 => S = 1/2 + 1/4 + 1/6
	}

	printf("Tong: %lf\n",Tong);

}