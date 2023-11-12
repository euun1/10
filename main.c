#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *filePointer;
    
    filePointer = fopen("sample.txt", "w");
    
    if (filePointer == NULL) {
        printf("File not accessible.\n");
        return 1;
    }

    char word1[50], word2[50], word3[50];
    
    printf("input a word: ");
    scanf("%s", word1);
    
    printf("input a word: ");
    scanf("%s", word2);
    
    printf("input a word: ");
    scanf("%s", word3);

    fprintf(filePointer, "%s %s %s", word1, word2, word3);

    fclose(filePointer);
    
	system("PAUSE");
	return 0;
}
