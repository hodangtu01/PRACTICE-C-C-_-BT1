// Hay nhap 4 so nguyen a, b, c, d. Tim gia tri lon nhat cua chung va gan gia tri lon nhat do cho bien max 
// In gia tri max tim duoc ra man hinh. Trong truong hop 4 so bang nhau thi in ra: Khong co so lon nhat

#include <stdio.h>

int main()
{
	int a, b, c, d;
	int max;
	printf("Nhap 4 so nguyen a b c d: \n");
	scanf("%d %d %d %d",&a, &b, &c, &d ); // Doc 4 so vao bang scanf, lan luot gan vao bien a, b, c, d
	
	// su dung toan tu 3 ngoi
	// neu a > b thi a se duoc gan vao max va nguoc lai b se duoc gan cho max
	// Co the su dung if else
	//int max = (a > b) ?a : b; 
	//max = (max > c) ? max : c;
	//max = (max > d) ? max : d;
	//=================================
	if (a>b){max = a;}
	else { max = b;}
	if(max > c)	{max = max;}
	else{ max = c;}
	if( max > d){ max = max; }
	else{ max = d; }
	
	
	// Kiem tra dieu kien dong thoi
	if (a == b && b == c && c == d ) 
	{
		printf("Khong co gia tri lon nhat! \n");
	}
	else
	{
		printf("Gia tri lon nhat trong 4 so la: %d \n",max);
	}
	return 0;
}
