#include <stdio.h>
int main(){
	int n,m;
	
	printf("\nEnter 1st number:");
	 scanf("%d", &n);
	printf("\nEnter 2nd number:");
     scanf("%d", &m);
    printf("\nCong:%d+%d=%d", n,m,n+m);
	printf("\nTru:%d-%d=%d", n,m,n-m);
	printf("\nNhan:%d*%d=%d", n,m,n*m);
	printf("\nChia:%d/%d=%.2f", n,m,(float)n/m); 
	printf("\nChia:%d/%d=%.3f", n,m,(float)n/m); //
	printf("\nChia:%d/%d=%.9f", n,m,(float)n/m); // casting để ép biến đổi sang kiểu giá trị mong muốn (float)
	// %.2f %.3f for 2 decimal places, 3 decimal places.
	return 0;                     
}          