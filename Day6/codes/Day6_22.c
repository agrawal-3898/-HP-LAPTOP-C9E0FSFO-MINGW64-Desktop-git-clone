#include<stdio.h> 
int main( )
{
    char name[20]; 
    printf("Enter the name"); 
    //scanf("%s",name);//name of array => base address  
    //scanf("%[^\n]",name); //scan set 
    /*
         %s will read upto white spaces (space , tab , newline )
         new york 
         => new    
    */
    gets(name); //preferred way of reading whole line 
    printf("%s",name); 
    return 0; 
}