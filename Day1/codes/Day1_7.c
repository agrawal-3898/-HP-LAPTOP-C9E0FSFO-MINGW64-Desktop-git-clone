#include<stdio.h> 
int main()
{
    //escape sequence ( \n , \b , \r , \t )
    //printf("\"Hello world\""); //\" \" => double quote 
    
    //printf("\'Hello world\'"); //\' \' => single quote 
    
    //printf("Hello \n world"); // \n => new line 
    
    //\b => backspace 
    //printf("OC14 batch,\b."); 
    //      OC14 batch.    
    //printf("Hello wo\brld");
    //      Hello wrld 
    
    //printf("12345678\n"); 
    //\t => tab => 8 spaces 
    //printf("\tSunbeaminfo"); 
    
    //\r => carriage return
    //printf("KC 14batch\rO");
    //      OC 14batch 
    
    // \ is called escape character 
    printf("\\n is used for newline"); 
    return 0;
}
