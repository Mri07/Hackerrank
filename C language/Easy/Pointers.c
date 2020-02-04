#include <stdio.h>

void update(int *a,int *b) {
     int i=0,*ip=&i;  
     while(*ip<*a)
      (*ip)++;

      *a=*a  + *b;
      *b=abs(*ip - *b);
      /*Another way
      *a=*a + *b;
      *b=abs(*a -(2* (*b) ) );*/

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

