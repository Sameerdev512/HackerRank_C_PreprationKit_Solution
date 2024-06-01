#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    char *word =s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            printf("\n");
        }
        else{
            word[i]=s[i];
            printf("%c",word[i]);
        }
    }
    return 0;
}
