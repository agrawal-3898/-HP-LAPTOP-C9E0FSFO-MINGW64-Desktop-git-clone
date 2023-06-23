#include<stdio.h> 
//command line argument 
int main(int argc, char  *argv[])
{
    // a.exe one two three 
    //argc => argument count 
    //printf("%d ",argc); 
    //argv => argument vector 

    // printf("%s ",argv[0]); //a.exe 
    // printf("%s ",argv[1]); //1 
    // printf("%s ",argv[2]); //2 
    // printf("%s ",argv[3]); //3 
    int i; 
    for(i=0; i < argc; i++)
            puts(argv[i]);
    return 0;
}
// atoi(); 
