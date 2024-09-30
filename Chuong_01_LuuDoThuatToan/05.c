#include "stdio.h"
int main()
{
	int N_SoNguyen;

	printf("Nhap N: ");
	scanf("%d",&N_SoNguyen);

	//Tinh tong S = 1+ 1/3+1/5+....1/2n +1
	double Tong = 0.00;
	for(int i = 0; i < N_SoNguyen; i++)
	{
		Tong = Tong + 1.0/(2.0*i + 1.0);
		//vd i = 0 => S = 1
		//   i = 1 => S = 1 + 1/3
		//   i = 2 => S = 1 + 1/3 +1/5
	}

	printf("Tong: %lf\n",Tong);

}