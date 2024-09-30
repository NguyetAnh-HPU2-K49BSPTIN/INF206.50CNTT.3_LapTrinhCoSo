#include"stdio.h"

int main ()
{
	int N_SoNgguyen;
	double Tong;

	//Tính S = 1/2 + 3/4 + ... + (2n + 1)/(2n+2)
	//Nhap
	printf("Nhap N: ");
	scanf("%d", &N_SoNgguyen);

	//Tính tổng
	for(int i = 0; i < N_SoNgguyen; i++)
	{
		Tong = Tong + (2.0 * i + 1.0) / (2.0 * i + 2.0);
	}

	printf("Tong : %lf", Tong);
	return 0;
}