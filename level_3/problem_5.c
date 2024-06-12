//get a number from user and count number of zeros in that number and print the result. write a code inside the function.
#include<stdio.h>
int find_no_of_zeros(int no);
int main()
{
int number,result;
printf("Enter the number\n");
scanf("%d",&number);
result=find_no_of_zeros(number);
printf("\n%d\n",result);
return 0;
}

int find_no_of_zeros(int no)
{
int res;
res=0;
while(no>0){
if(no%10==0)
{
res=res+1;
}
no=no/10;
}
return res;
}
