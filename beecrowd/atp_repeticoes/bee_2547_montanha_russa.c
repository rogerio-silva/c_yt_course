//
// Created by rogerio on 21/02/2026.
//

#include <stdio.h>

int main() {
  int n,mi,ma, a, c;
  while(scanf("%i %i %i",&n,&mi,&ma)!=EOF){
  		c=0;
      for(int i=0;i<n;i++){
          scanf("%i",&a);
          if (a<=ma && a>=mi) c++;
      }
      printf("%i\n",c);
  }
    return 0;
}