#include<stdio.h> 
int main( )
{
    char ch = 'A'; 
    char *cptr = &ch; 
    char **cpptr = &cptr; // pointer to pointer 
    // printf("%d ",sizeof(ch)); //1 
    // printf("%d ",sizeof(cptr)); //4 / 8 ( pointer size) 
    // printf("%d ",sizeof(*cptr)); //1 ( scale factor )
    
    printf("%d ",sizeof(cpptr)); // 4 / 8 
    printf("%d ",sizeof(*cpptr)); // 4 byte 
    printf("%d ",sizeof(**cpptr)); // 1 byte 
    return 0; 
}