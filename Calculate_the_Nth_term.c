#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int arr[20];
  arr[0]=a;
  arr[1]=b;
  arr[2]=c;
  int result=0;
      if(n>3)
      {
          for(int i=2;i<n-1;i++)
          {
              result = arr[i]+arr[i-1]+arr[i-2];
              arr[i+1]=result;
          }
      }
  
  return arr[n-1];
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
