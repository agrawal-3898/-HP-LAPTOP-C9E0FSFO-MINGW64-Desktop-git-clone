#include<stdio.h> 
int main()
{
    //bitwise operator 
    //left-shift operator 
    //( << )
    //int ans = 10 << 2;
    /*
            0000 1010 
               <<2  
            0010 1000 ( 40 )
            

            left shift by n 
            multiply by 2 to the power n 
            10  * 2 to the power 2 
            10 * 4 
            40 
    */
    int ans = 10 >> 2;
    /*
            0000  1010 
                >>2 
            0000  0010 (  2)  

            
            left shift by n 
            divide  by 2 to the power n 
            10  / 2 to the power 2 
            10 / 4 
            2 

    */
    printf("ans = %d",ans);   
    return 0;
}
