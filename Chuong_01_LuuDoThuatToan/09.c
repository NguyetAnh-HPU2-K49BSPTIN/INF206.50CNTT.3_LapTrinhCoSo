#include <stdio.h>  // Use angle brackets for standard library headers

int main()
{
	int N_SoNguyen;
	double T_n = 1.0;

	// Tính T(n) = 1 * 2 * 3 * … * n

	// Nhập N
	printf("Nhap N: ");
	scanf("%d", &N_SoNguyen);

	// Tính T(n)
	for (int i = 1; i <= N_SoNguyen; i++)
	{
		T_n = T_n * i;
	}


	printf("T = %lf\n",  T_n);

	return 0;
}
