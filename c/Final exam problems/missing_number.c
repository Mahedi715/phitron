#include <stdio.h>


int main() {

    int t;
//   test cases
  scanf("%d", &t);
    int r[t];
//   all inputs
  int s,a,b,c;
  
  for (int i=0;i<t;i++){
    scanf("%d%d%d%d", &s,&a,&b,&c);
    int d=s-(a+b+c);
    r[i]=d;
  }
//   all outputs
  for (int i=0;i<t;i++){
      printf("%d\n",r[i]);
  } 
    return 0;
}
