#include<stdio.h> 
int main()
{
    //width specifier 
    int x = 10; 
    //printf("          %d",x); 
    //printf("%10d",x); // right justified 
    //                 1 0  
    // - - - - - - - - - - 

    //printf("%-10d",x); // left justified 
    // 1 0 
    // - - - - - - - - - - 
    
    float fvar = 11.33; 
    //printf("%f",fvar); 

    //printf("%.2f",fvar); 

    //printf("%10.2f",fvar);//right justified 
    //               1 1 . 3 3          
    //     - - - - - - - - - -  

    //printf("%-10.2f",fvar);// left justified 
    //     1 1 . 3 3          
    //     - - - - - - - - - -  

    printf("%.f",fvar);// round off => 11.33 => 11 
    return 0;
}
