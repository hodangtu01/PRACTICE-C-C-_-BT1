// Nhap vao mot so nguyen n, hay cho biet so do la chan hay le, am hay duong, in ket qua kiem tra ra man hinh.
// Moi ket luan tren 1 dong
#include <stdio.h>

int main()
{
	
	int n;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);  // Doc du lieu vao (doc so n vao) - Doc vao dinh dang so nguyen --> %d; Gan vao gia tri bien n --> &n
//--------------------------------------------------------------------------------------------------------------------------------
//	if (n < 0)
//	{
//		printf("Day la so nguyen am %d \n",n); //%d can phai duoc cung cap 1 bien tuong ung luu tru gia tri --> n 
//	}
//	else if (n == 0 ) 
//	{
//		printf("Day la so khong am khong duong"); // %d ; ,n --> khong in so ra 
//	}
//	else if (n > 0)
//	{
//		printf("Day la so nguyen duong %d \n",n);
//	}
//	if (n % 2 == 0) 
//	{
//		printf("Day la so nguyen chan %d \n ",n);
//	}
//	else
//	{
//		printf("Day la so nguyen le %d \n ",n);
//	}
//-------------------------------------------------------------------------------------------------------------------------------------
	if(n >0 && n % 2 == 0)
	{
		printf(" Day la so nguyen duong chan %d \n",n);
	}
    else if ( n < 0 && n % 2 == 0)
	{
		printf(" Day la so nguyen am chan %d \n",n);
	}
    else if ( n < 0 && n % 2 != 0)
	{
		printf(" Day la so nguyen am le %d \n",n);
	}
	else
	{
		printf(" Day la so nguyen duong le %d \n",n);
	}
	return 0;
}
