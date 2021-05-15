//edited by yash tiwari
// program for fibonacci series by delcr function and recursion
#include<stdio.h>  
int fibonacci(int);  // delcr function with argu
int main ()  
{  
    int n,f;  
    printf("Enter the value of n?");  
    scanf("%d",&n);  
    f = fibonacci(n);  //storing the function in variable and calling the delcr function
    printf("%d",f);  
}  
int fibonacci (int n)  //argument is int amd will return something 
{  
    if (n==0)  // condition satisfies then return o otherwise return 1
    {  
    return 0;  
    }  
    else if (n == 1)  
    {  
        return 1;   
    }  
    else  
    {  
        return fibonacci(n-1)+fibonacci(n-2);  
    }  
}  

