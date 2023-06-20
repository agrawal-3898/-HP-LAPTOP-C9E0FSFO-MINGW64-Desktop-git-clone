#include<stdio.h> 
//function declaration 
double addition( double num1 , double num2 ); 
void multiplication( double a , double b ); 
int division( int num , int den ); 
void subtraction( void  ); 
int main( ) //user-defined function 
{
    double num1 = 10.00 , num2 = 2.00 , res; 
    res = addition(num1,num2); //call 
    printf("\n res = %.2lf",res);
    multiplication(2.0,4.0); //call  
    int num,den,result; 
    printf("\n Enter the num1 and num2:: "); 
    scanf("%d%d",&num,&den); 
    result = division(num,den); 
    printf("\n %d ",result); 
    subtraction(  ); 
    return 0; 
}
//Function can return max one value
void subtraction( void  )
{
    int p,q,r; 
    printf("\n Enter the values"); 
    scanf("%d%d",&p,&q); 
    r = p - q; 
    printf("\n res = %d",r); 
    
}
int division( int num , int den )
{
       return num/den;  
}

//user-defined function 
void multiplication( double a , double b )
{
        double c; 
        c = a * b; 
        printf("\n c = %.2lf",c); //8.00 
}

double addition( double num1 , double num2 )
{
        double z; 
        z = num1 + num2; 
        return z; 
}