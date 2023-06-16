#include <stdio.h>

int main()
{
    //int , double , char , float
    int num = 1; //variable declaration + initialization 
    char ch = 'A';//variable declaration + initialization 
    float fvar = 12.3;//variable declaration + initialization 
    double dvar = 10.3;  //variable declaration + initialization 
    
    //printf is a function used to print string / data on terminal 
    
    //format specifier 
    // int => %d , float => %f double => %lf char => %c  
    //printf("num = %d\n",num);
    //      num = 1 
    //printf("ch = %c\n",ch);
    //      ch = 'A' 
    //printf("fvar = %.1f\n",fvar);
    //      fvar = 12.3
    //printf("dvar = %.1lf",dvar);   
    //      dvar = 10.3 

    //printf(" %c \n %d \n %.2f \n %.2lf",ch,num,fvar,dvar);   
    return 0;
}