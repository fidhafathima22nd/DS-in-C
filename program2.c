//Write a program to swap numbers//
#include<stdio.h>
 int main()
{
int a,b,temp;
printf("enter two numbers");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\nfirst number=%d",a);
printf("\nsecond number=%d",b);
return 0;
}
