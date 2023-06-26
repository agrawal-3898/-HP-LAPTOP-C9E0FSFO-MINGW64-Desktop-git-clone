#include<stdio.h> 
//self-referential structure 
struct node
{
    int data; 
    struct node *ptr;//self-referential pointer   
}; 
int main()
{
    struct node n1; 
    struct node n2; 
    return 0;
}
