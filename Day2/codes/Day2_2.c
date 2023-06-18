#include<stdio.h> 

int main( )
{
    /*
        type modifiers 
         signed 
         unsigned 
         short 
         long    
    */
    //signed int num = 2147483647; // by default considered as signed 
    /*
             4 bytes ( 32 bits )
             (2 to power 32 - 1 ) - 1  
             (2 to power 31 ) - 1 
             2147483647 => max range  
             -2147483648 => min range 
    */
    //printf("%d",num); 
    unsigned int x=4294967295; // 4 bytes ( no msb bit) 
    /*
             4 bytes ( 32 bits )
             (2 to power 32) - 1  
             max => 4294967295
    */
    printf("%u",x); // unsigned => %u 
    return 0; 
}