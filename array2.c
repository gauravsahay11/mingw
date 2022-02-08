#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main() {
    float x,z;
    float y;
    printf("Enter value of x");
    scanf("%f",&x);
    printf("Enter number of terms");
    int a;
    scanf("%d",&a);
    z=(x-1);
    y=(z/x);
    
    printf("%f \n",y);
    float c=1;
    float d=1;
    float b=1;
    for(int i=1;i<=a;i=i+1){
        
        c=b;
        b=pow(y,i);
        d=c+b;
        printf("%f\n",c);
        
    }
        float e;
        e=(d*0.5)+y;
        printf("%f",e);
                   
                  
   
   
    return 0;
}