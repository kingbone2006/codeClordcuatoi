#include <stdio.h>
int main(){
	int n,i,g;
	printf("Nhap mot so nguyen duong n (1 < n <= 10): ");
    scanf("%d", &n);
	 	if (n <= 1 || n > 10) {
        printf("Nigga. Vui long chay lai chuong trinh va nhap n thoa man 1 < n <= 10.\n");
        return 1;
    }
     	for (g = 1; g <= n; g++){
     		printf("\nBang cuu chuong %d", g);
     		for (i = 1; i <= 10; i++){
     		printf("\n%d x %d = %d",g,i,g*i);
		 }
	 }
}
	 