#include <stdio.h>

int main() {
	int N_PhanTu;

	printf("N= ");
	scanf("%d", &N_PhanTu);

	double Tong = 0;
	// Tính tổng
	for (int i = 1; i <= N_PhanTu; i++) {
		Tong = Tong + i * i;
	}

	// In kết quả
	printf("Tong = %lf\n", Tong);
	return 0;
}
