// Nhap vao hai so nguyen a, b. So sanh hai so va in ket qua ra man hinh

#include <stdio.h>

int main()
{
	int a,b;
	printf("Nhap 2 so nguyen a va b: \n");
	scanf("%d %d", &a, &b);
	
	if (a < b)
	{
		printf("So a nho hon so b: %d < %d", a, b); // them dia chi a va b de hien so da nhap
	}
	else if (a > b)
	{
		printf("So a lon hon so b: %d > %d", a, b);
	}
	else
	{
		printf("So a bang so b: %d = %d", a, b);
	}
	return 0;
}
