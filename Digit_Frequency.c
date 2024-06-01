#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000];
    scanf("%[^\n]%*s", s);
    int arr[10] = {0};
    int arr2[10]={'0','1','2','3','4','5','6','7','8','9' };
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<strlen(s);j++)
        {
            if(arr2[i]==s[j])
            {
                arr[i]  += 1;
            }
        }
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
