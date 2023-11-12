#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
    
    fp = fopen("sample.txt", "r");
    
    if (fp == NULL) {
        printf("파일을 못열음.\n");
        return 1;
    }

    int character;

    while ((character = fgetc(fp)) != EOF) {
        putchar(character);
    }

    fclose(fp);
    
	system("PAUSE");
	return 0;
}
