#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[30]="happy C programming";
	
	int strLength = strlen(str);
	
	printf("문자열 \"%s\"의 길이 : %i", str, strLength);
	system("PAUSE");
	return 0;
}
