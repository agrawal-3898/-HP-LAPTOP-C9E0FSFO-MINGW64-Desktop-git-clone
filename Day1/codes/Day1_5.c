#include<stdio.h> 

int main( )
{
    //intialization can be done only once 
    int number = 50;// variable decln + init  
    //printf("%d",number); //50 
    int x;// variable declaration ( garbage ) 
    x = 10; // assignment operation 

    printf("%d \n",x); //10 
    x = -11;  
    printf("%d \n",x); //-11 
    x = 22; 
    x = 33; 
    x = 500;  
    printf("%d \n",x); //500   
    //assignment can be done multiple number of times 
    
    // int y = 20; // NOT OK  
    // int y = 30; // NOT OK 

    return 0; 
}
/*
        int y; //variable declaration 
        int y = 10; //variable declaration  + init 
        y = 20; //  assignment 

        int x = 10; 
        int y = 20; 
        int x = 10 ,  y = 20 // OK 
*/