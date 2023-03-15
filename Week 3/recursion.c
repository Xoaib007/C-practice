#include<stdio.h>
#include<cs50.h>

int find_factorial(int);
int main()
{
   int num, fact;
   //Ask user for the input and store it in num
   int num = get_int("Factorial of: ");
 
   //Calling our user defined function
   fact =find_factorial(num);
 
   //Displaying factorial of input number
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}

int find_factorial(int n)
{
   //Factorial of 0 is 1 
   if(n==0)
   {
      return(1);
   }
   //Function calling itself: recursion
   return(n*find_factorial(n-1));
}
