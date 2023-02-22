// Viet chuong trinh nhap vao hai canh cua hinh chu nhat
// Tinh chu vi va dien tich hinh chu nhat va hien thi ket qua ra man hinh
#include <stdio.h>

int main()
{
	float a, b;
	// Them dieu kien lon hon khong
	printf("Nhap hai canh a va b cua hinh chu nhat:\n");
	scanf("%f %f",&a, &b);
	if(a > 0 && b>0)
	{
		printf("Chu vi cua hinh chu nhat: %f ", (a+b)*2);
		printf("\nDien tich cua hinh chu nhat: %f",(a*b));
	}
	else if(a > 0 && b < 0){ printf("Moi ban nhap canh b >0"); }
	else if(a < 0 && b > 0){ printf("Moi ban nhap canh a >0"); }
	else { printf("Moi ban nhap hai canh > 0"); }

	
	return 0;
}
