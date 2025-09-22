#include <stdio.h>
int main(){
	printf("%c\n", 65);
	printf("%d\n", 65);
	printf("%O\n", 65);
	printf("%X\n", 65);
	
	int so1;
	int so2;
	printf("Nhap so thu nhat:\n");
	scanf(" %d", &so1);
	printf("Nhap so thu hai:\n");
	scanf(" %d", &so2);
	int ketqua = so1 + so2;
	printf("Ket qua la: %d" , ketqua);
	
}