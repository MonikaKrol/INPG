#include<stdio.h>
#include<stdlib.h>

/* function returning the max between two numbers */
int max(int num1, int num2)
{
  /* local variable declaration */
  int result;
  
  if (num1 > num2)
    result = num1;
  else
    result = num2;
 
  return result;
}

int main()
{

  int a;
  int b;
  prinf(" a = ");
  scanf("%i", &a);
  
  prinf(" b = ");
  scanf("%i", &b);
  
  if(max(a, b) == a)
  	   printf("Liczba a jest wieksza");
  else
  	   printf("Liczba b jest wieksza");
	   
return 0;
}
