#include <stdio.h>

int main(){
	double a , b , x;
	printf("\nNhap gia tri a:");
	scanf("%lf", &a);
	a = 0;
	printf("Cut ra ngoai!");
	printf("\nNhap gia tri b:");
	scanf("%lf", &b);
	x = -b / a;
	printf("\nKet qua la:%.2lf", x);
	return 0;
}