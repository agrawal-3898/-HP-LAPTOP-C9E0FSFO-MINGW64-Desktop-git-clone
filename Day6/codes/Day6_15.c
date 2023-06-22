#include<stdio.h> 
int main()
{
    //type qualifier => const , volatile 
    const int num = 10; 
    printf("%d ",num); //10 // OK 
    num = 20;// NOT OK  
    num++; // NOT OK 
    return 0;
}
