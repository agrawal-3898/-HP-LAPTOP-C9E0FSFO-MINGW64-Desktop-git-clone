#include<stdio.h> 
void fun1( ); 
void fun( ); 
extern int num1;  
int main()
{
    //extern int num1; 
    printf("%d \n",num1);
    fun(); 
    fun1();  
    return 0;
}
void fun( )
{
    //extern int num1; 
    printf("%d \n",num1);     
}
void fun1( )
{
    //extern int num1; 
    printf("%d \n",num1);
}
int num1 = 10; 