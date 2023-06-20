#include<stdio.h> 
//int addition( int num1 , int num2 ); //function declaration ( global  declaration )
int addition( int  , int  ); //function declaration ( global  declaration )
//             type checking  
int main() // user-defined function 
{
    int num1 = 10 , num2 = 20,res; //local variables 
    //local variables => in-function variables  
    //int addition( int num1 , int num2 ); //function declaration ( local declaration )
    res = addition( num1, num2 ); // function call 
    //num1 and num2 are called as actual argument 
    printf("res = %d\n",res); //30 
    res = addition(10,10); //call 
    printf("res = %d\n",res); //20  
    res = addition(20,30); //call  
    printf("res = %d\n",res); //50 
    addition(100,200); // call 
    return 0;
}
//main => calling function 
//addition => called function 

// num1 and num2 are called as formal arguments 
int addition( int num1 , int num2 ) //user-defined function 
{
    // num1 and num2 are called as local variable 
    int ans; //local variable 
    ans = num1 + num2; // 10 + 20 => 30 
    return ans;  
}

// x = printf("hello world");//11  
