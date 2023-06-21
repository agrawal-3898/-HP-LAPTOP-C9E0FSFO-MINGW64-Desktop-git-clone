#include<stdio.h> 
int myfact(int num);
int main( )
{
    int num = 5; 
    int result = myfact(120); 
    printf("result = %d",result); 
    return 0; 
}
int myfact(int num)
{
    int result; 
    if(num == 0 ) // terminating condition 
        return 1; 
    else 
      result = num * myfact(num - 1); 
    return result; 
}