#include<stdio.h> 

int main( )
{
    //strcmp(); 
    // char str1[20] = "sunbeam"; //stack 
    // char str2[20] = "sunbeam"; // stack 
    // if(str1 == str2) // comparing the address 
    //   printf("same"); 
    // else 
    //   printf("not same");  
    
    //memory is allocated from RO data section 
    // char *str1 = "info"; //pointer to string 
    // char *str2 = "info"; //pointer to string 
    // if(str1 == str2)
    //     printf("same"); 
    // else 
    //     printf("not same"); 

    //char str[10] = "ABC"; // stack 
    //str[0] = 'K'; // OK 
    //printf("%s",str); // KBC 
    
    char *s = "ABC"; // Pointer to string ( RO datasection)
    //printf("%s",s); 
    //s[0] ='K'; // not ok (runtime error ) 
    printf("%s",s); //runtime error  
    return 0; 
}