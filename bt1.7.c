// Viet chuong trinh nhap ban kinh cua hinh tron va tinh chu vi, dien tich hinh tron do
#include <stdio.h>

int main()
{
	float r;
	printf("Nhap ban kinh hinh tron:\n");
	scanf("%f", &r);
	if(r > 0)
	{
		printf("Chu vi hinh tron: %0.2f", 2*r*3.14);
		printf("\nDien tich hinh tron: %0.2f", r*r*3.14);
	}
	else { printf("Moi ban nhap ban kinh > 0"); }
	
	return 0;
}
