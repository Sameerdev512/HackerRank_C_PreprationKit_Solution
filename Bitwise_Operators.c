#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int max1=0,max2=0,max3=0,a,b,c;
  for(int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          a = i|j;
          if(a<k && a>max1)
          {
              max1=a;
          }
           b = i&j;
          if(b<k && b>max2)
          {
              max2=b;
          }
           c = i^j;
          if(c<k && c>max3)
          {
              max3=c;
          }
          
      }
  }
  printf("%d\n%d\n%d",max2,max1,max3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
