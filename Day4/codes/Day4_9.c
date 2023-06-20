#include<stdio.h> 
void sumpro( int a , int b); 
int main()
{
    auto int d; 
    int c; 
    int a =10 , b = 3; 
    //sumpro(a,b); 
    //printf("\n inside main  %d %d",ps,pp); // ?? 
    // main cannot access local variable from another function 
    // scope of ps and pp is limited to sumpro only 
    return 0;
}
void sumpro( int a , int b)
{
    int ps,pp;
    ps = a + b; //10 + 3 => 13 
    pp = a * b; // 10 * 3 => 30 
}
