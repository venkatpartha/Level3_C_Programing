//get a number from user and add 2 to that number and print the result. write a code inside the function.
#include<stdio.h>
int function(int no);
int main()
{
int number1,number2;
scanf("%d",&number1);
number2=function(number1);
printf("\n%d\n",number2);
return 0;
}

int function(int no)
{
int no2;
no2=no+2;
return no2;
}
