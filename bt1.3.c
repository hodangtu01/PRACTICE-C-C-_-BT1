// Nhap vao hai so nguyen a, b. In ra man hinh tong, hieu, tich, thuong cua chung
// Luu y xu ly phep chia can ep kieu, kiem tra mau khac 0.
// Xuat ket qua ra man hinh
#include <stdio.h>

int main()
{
	int a, b, sum, sub, mul;
	printf("Nhap vao 2 so nguyen: \n");
	scanf("%d %d",&a, &b); // Doc du lieu vao (doc so a va b vao) - Doc vao dinh dang so nguyen --> %d; Gan vao gia tri bien n --> &n
	sum = a+b;
	sub = a-b;
	mul = a*b;
//	div = a/b;
	
	printf("Tong cua hai so nguyen a va b la: %d + %d = %d \n", a, b, sum);
	printf("Hieu cua hai so nguyen a va b la: %d - %d = %d \n", a, b, sub);
	printf("Tich cua hai so nguyen a va b la: %d * %d = %d \n", a, b, mul);
	
	
	// Kiem tra mau khac 0 khi thuc hien phep chia
	if (b == 0)
	{
		printf("Khong thuc hien duoc phep chia a va b"); // div = a/b thuc hien tu tren xuong
	}
	else
	{
		float div = (float) a/b;
		printf("Thuong cua hai so nguyen a va b la: %d / %d = %f \n",a, b, div);
	}

	
	return 0;
}
