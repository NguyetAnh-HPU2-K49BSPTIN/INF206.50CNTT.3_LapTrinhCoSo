#include <stdio.h>

int main()
{
	//	T(x, n) = 𝑥𝑛
	int N_SoNguyen;
	double X;
	double T = 1.0;

	// Nhập x và n
	printf("Nhap N, X: ");
	scanf("%d %lf", &N_SoNguyen, &X);

	// Tính T(x,n) = x^n
	for (int i = 1; i <= N_SoNguyen; i++)
	{
		T = T * X;
	}

	// In kết quả
	printf("T = %lf\n",T);

	return 0;
}
