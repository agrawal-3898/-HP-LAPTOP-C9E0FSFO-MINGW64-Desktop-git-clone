#include<stdio.h> 
int main()
{
    //alias => nickname 
    typedef int INT;
    typedef INT INTT; 
    int x; 
    INT z;  
    INTT p;  

    enum color 
    {
        red,blue,green 
    };
    //enum color c1; // c1 => variable-name 
    typedef enum color e_c; 
    e_c c2,c3,c4; 

    enum //annonymous enum 
    {
         add,subtract,mult   
    }c5,c6;
    
    size_t z;  

    return 0;
}
