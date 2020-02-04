#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    float a,b,c;
    scanf("%d %d",&x,&y);//int   numbers
    scanf("%f %f",&a,&b);//float numbers    
    
    printf("%d",x+y);
    printf(" %d",x-y);

    printf("\n%.1f",a+b);
    printf(" %.1f",a-b);

    //Another method
    /*z=x+y;
    printf("%d",z);
    z=x-y;
    printf(" %d",z);
    
    c=a+b;
    printf("\n%.1f",c);
    c=a-b;
    printf(" %.1f",c);
    */
        
    return 0;
}

