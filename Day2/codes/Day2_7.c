#include<stdio.h> 

int main( )
{
    int num; 
    char ch; 
    double d1; 
    short int s1; 
    //sizeof( ) is compile time operator 
    // printf("%d ",sizeof(num + ch)); // 4 byte 
    // printf("%d ",sizeof(10.33 + 'A')); // 8 byte 
    // printf("%d ",sizeof(10.33f + 'A')); // 4 byte
    // printf("%d ",sizeof(s1 + ch)); //int => 4 byte  
    
    //char ch2 = 'A'; 
    //printf("%d ",sizeof('A')); //sizeof(65)=> 4 byte 
    //char const => int   
    //printf("%d ",sizeof(ch2));//1 byte 
    //  ch2=>variable => char => 1 bytes 

    int x = 1; 
    printf("%d ",sizeof(x = x +1));  // 4 byte 
    printf("%d ",x);//1  
    return 0; 
}