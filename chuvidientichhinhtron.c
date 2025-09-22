#include <stdio.h>
#include <math.h>
int main (){
	double r;
	printf("\nNhap ban kinh cua hinh tron:");
	scanf("%lf", &r);
	double chuvi = 2 * M_PI * r;
	printf("\nChu vi cua hinh tron la:%.3lf", (float)chuvi);
	double dientich = M_PI * r * r;
	printf("\nDien tich cua hinh tron la:%.3lf", (float)dientich);
	return 0;
}