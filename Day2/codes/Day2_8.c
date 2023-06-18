#include<stdio.h> 

int main( )
{
    //arithmatic operator(+,-,*,/,%) (binary operator)
    //unary(+,-)
    //int num = -1; // unary - 
    //int num1 = +1;   
    
    // % => modulus ( remainder )
    //printf("%d ",4 % 2); // 0 (remainder) 
    //printf("%d ",4 / 2); // 2  (quotient) 
    
    //% operator takes the sign of numerator 
    printf("%d ",4 % 3); //1
    printf("%d ",-4 % 3);//-1
    printf("%d ",4 % -3);//1
    printf("%d ",-4 % -3);//-1 
    return 0; 
}