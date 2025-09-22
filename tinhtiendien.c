#include <stdio.h>

int main() {
    int sodien;
    long long sotien = 0;
    int bac1 = 1984; // 0 - 50 kWh
    int bac2 = 2050; // 51 - 100 kWh
    int bac3 = 2380; // 101 - 200 kWh
    int bac4 = 2998; // 201 - 300 kWh
    int bac5 = 3350; // 301 - 400 kWh
    int bac6 = 3460; // > 400 kWh

    printf("\nDay la phan mem tinh tien dien!");
    printf("\nMoi ban nhap vao so dien da su dung:");
    scanf("%d", &sodien);

    if (sodien <= 0) {
        printf("\nSo dien khong hop le!");
        return 0;
    }

    if (sodien <= 50) { // bac 1
        sotien = sodien * bac1;
    } else if (sodien <= 100) { // bac 2
        sotien = 50 * bac1 + (sodien - 50) * bac2;
    } else if (sodien <= 200) { // bac 3
        sotien = 50 * bac1 + 50 * bac2 + (sodien - 100) * bac3;
    } else if (sodien <= 300) { // bac 4
        sotien = 50 * bac1 + 50 * bac2 + 100 * bac3 + (sodien - 200) * bac4;
    } else if (sodien <= 400) { // bac 5
        sotien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + (sodien - 300) * bac5;
    } else { // bac con lai ... bac 6
        sotien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + (sodien - 400) * bac6;
    }
	
    printf("\nSo tien dien cua ban la: %lld vnd", sotien);
		int dienvathue = sotien + (sotien * 10) / 100;
	printf("\nSo tien ma ban can phai thanh toan (bao gom thue VAT) la: %lld vnd", dienvathue); 
    if (sotien < 100000) {
        printf("\nThang nay dung cung tiet kiem phet day!");
    } else {
        printf("\nMay dung dien ton vay cu?");
    }

    return 0;
}