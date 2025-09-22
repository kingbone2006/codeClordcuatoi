#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int cyear;
    int namsinh;
    char input_buffer[50];
    
	printf("Bay gio la nam bao nhieu?(Enter=Auto):");
	fgets(input_buffer, sizeof(input_buffer), stdin);
	input_buffer[strcspn(input_buffer, "\n")] = 0;
	if (strlen(input_buffer) == 0) {
		time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        cyear = tm.tm_year + 1900;
        printf("Bay gio la nam %d\n", cyear);
    } 
	
    printf("Nhap nam sinh cua may vao day:");
    scanf(" %d", &namsinh);
    system("cls");
    int ages = cyear - namsinh;
    

    if (ages >= 18) {
    	SetConsoleTextAttribute(hConsole, 2);
        printf("Ai cha cha %d ", ages);
        printf("co day.Good good!");
    } else {
    	SetConsoleTextAttribute(hConsole, 4);
        printf("Thang nay tre trau :)))");
    }

    return 0;
}