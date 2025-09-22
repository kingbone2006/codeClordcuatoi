#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main (){
	int sizetruym;
	printf("Chim may dai bao nhieu cm?");
	 scanf(" %d", &sizetruym);
	if (sizetruym >= 7) {
        printf("Ai cha cha %d ", sizetruym);
        printf("co day.To phet nhe!");
    } else {
        printf("Thang nay Han Xeng a???");
    }

    return 0;
}