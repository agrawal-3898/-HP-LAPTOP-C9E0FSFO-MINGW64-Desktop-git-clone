#include<stdio.h> 
/*
            A-Z => 65 to 90 
            a-z => 97 to 122 
            0-9 => 48 to 57 

*/
int main()
{
    char ch = 'A'; // 65 (binary of 65 => 1 byte )
    char ch2 = 65; 
    
    //printf("%c",ch);//A 
    //printf("%d %c",ch2,ch2); // 65 A 
    //printf("%d %d",'0','9'); 
    
    // \n , \r , \t , \b => character constant ( ascii value )
    //printf("%d ",'\n'); //10 
    //printf("%d ",'\t'); //9 
    //printf("%d",'\n' - '\t'); 
    
    //char c1 = 'z'; //122 
    //printf("%d %c %o",c1-57,c1-'9',c1-32); 
    //                122-57,122-57,122-32   
    
    //char ch4 = 131;//signed ( msb bit ) (127 to -128 ) 
    // size => 1 byte ( 8 bits )
    //printf("%d",ch4);//-128 
   
    unsigned char ch5=255; // 1 bytes ( 0 to 255 )
    /*
            unsigned char => 1 byte 
            1 byte => 8 bits 
            (2 to the power 8 ) - 1 
                256 -  1
                255 
    */
    printf("%u ",ch5);  
    return 0;
}
/*
    -128 -127 -126 -125... 0  1 2 3 4 .....127 

    128=> -128 
    129=> -127 
    130=> -126 
    131=> -125  

*/