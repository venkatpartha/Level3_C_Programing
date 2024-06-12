//get a number from user and check prime or not and print the result. write a code inside the function.
#include<stdio.h>
int isPrime(int no);
int main()
{
int number,result;
printf("Enter number\n");
scanf("%d",&number);
result=isPrime(number);
if(result==1)
printf("\nNumber is prime\n");
else
printf("\nNumber is not prime\n");
return 0;
}

int isPrime(int no)
{
int res;
if(no==2 || no==3 || no==5 || no==7){
res=1;
}
else if(no%2==0 || no%3==0 || no%5==0 || no%7==0){
res=0;
}
else
{
res=1;
}
return res;
}
