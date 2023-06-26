#include<stdio.h> 
#include<stdlib.h> 
int main()
{
    FILE *fptr; 
//A file pointer (stream pointer ) is pointer to a structure of type FILE 
//when file is opened a structure of type FILE is associated with it which identifies file    
    char ch; 
    if((fptr = fopen("sunbeam.txt","w"))==NULL)
    {
          exit(1); 
    }
    while(( ch = getchar())!=EOF)
    {
            fputc(ch,fptr); 
    }
    fclose(fptr); 
    return 0;
}
