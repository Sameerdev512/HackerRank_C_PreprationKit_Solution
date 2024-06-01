#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    //Complete this function  
    int i , j; 
    i = *a + *b; 
    j = *a-*b;
    *a = i;
    if(j<0)
    {
        *b = -2*j+j;
    }
    else{
    *b = j;
    } 
}

int main() {
    int a, b;
    
    int *pa = &a;
    int *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
    return 0;
} 
