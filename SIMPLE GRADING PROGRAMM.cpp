//edited by yash tiwari
//marks calculate with the ladder if else
#include <stdio.h>  
int main()  
{  
    int marks;   
    printf("Enter your marks?");  
    scanf("%d",&marks);   
    if(marks > 85 && marks <= 100)  
    {  
        printf("Congrats ! you scored grade A ...");   
    }  
    else if (marks > 60 && marks <= 85)   
    {  
        printf("You scored grade B + ...");  
    }  
    else if (marks > 40 && marks <= 60)   
    {  
        printf("You scored grade B ...");  
    }  
    else if (marks > 30 && marks <= 40)   
    {  
        printf("You scored grade C ...");   
    }  
    else   
    {  
        printf("Sorry you are fail ...");   
    }  
}  

