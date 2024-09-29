#include<stdio.h>
#include<conio.h>

//Tính S(n) = 1 + 2 + 3 + … + n.
int main()
{
	//Khai báo số phần tử N
	int N_PhanTu;

	//Nhap vao số phần tử N
	printf(" ");
	scanf("%d", &N_PhanTu);

	//Khởi tạo cho tổng ban đầu là 0;
	int Tong = 0;
		//VD: S = 0 ;
		// i = 1 -----> S = 0 + 1 = 1
		// i = 2 -----> S = 1 + 2 = 3
		// i = 3 -----> S = 3 + 3 = 6
		//......
	for(int i = 0; i <= N_PhanTu ; i++ )
	{
		Tong = Tong + i;
	}
	printf("Tong = %d", Tong);
	return 0;

}