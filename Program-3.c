//INPUT: 2.4 1.12
//OUTPUT: Product = 2.69
#include<stdio.h>
int main() 
    {//correct the code
    double a,b,product;
    /p/printf("Enter two numbers\n");
    scanf("%f%f",a,b);  //correct the code
     
    product = a*b;
    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product=%.2f",product);
return 0   // correct the code
}
