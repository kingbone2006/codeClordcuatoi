#include <stdio.h>
#include <string.h> 

int main() {
    int so1;
    int so2;
    char dau[10];
    int ketqua;
    int option;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    
    printf("Chon loai phep tinh (+, -, *, / hoac cong, tru, nhan, chia): ");
    scanf("%s", dau); 
    
    
    if (strcmp(dau, "cong") == 0 || strcmp(dau, "+") == 0) {
        ketqua = so1 + so2;
    } else if (strcmp(dau, "tru") == 0 || strcmp(dau, "-") == 0) {
        ketqua = so1 - so2;
    } else if (strcmp(dau, "nhan") == 0 || strcmp(dau, "*") == 0 || strcmp(dau, "x") == 0 || strcmp(dau, "X") == 0) {
        ketqua = so1 * so2;
    } else if (strcmp(dau, "chia") == 0 || strcmp(dau, "/") == 0) {
        if (so2 != 0) {
            ketqua = so1 / so2;
            
        } else {
            printf("Loi: Khong the chia cho 0.\n");
            return 1;
        }
    } else {
        printf("Loi: Phep tinh khong hop le.\n");
        return 1;
    }
   printf("Ket qua:%d", ketqua);
    
    return 0;
}