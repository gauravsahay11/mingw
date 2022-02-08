
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
    int x,y,a,b,c,d;
    printf("Enter value of x\n");
    scanf("%d",&x);
    y=((x-1)/x);
    int i=2;
    printf("Enter value of a\n");
    scanf("%d",&a);
    for(int i;i<=a;i=i+1){
        b=pow(y,i);
        c=b;
        d=c+b;
        printf("%d",c) ;
        printf("%d",d) ;  
         
        }

   
    return 0;
}

    
    