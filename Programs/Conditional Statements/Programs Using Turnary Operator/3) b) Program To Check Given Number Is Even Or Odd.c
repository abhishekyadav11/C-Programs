#include <stdio.h>
#include<conio.h>

//Compiler version gcc  6.3.0
int main()
{  
  int no;  
    printf("Enter Number To Check Number Is Even Or Odd:");
    scanf("%d",&no);
     (no%2==0?printf("%d Is Even Number",no):printf("%d Is Odd Number",no));              
  return 0;
 }
  