#include<stdio.h>
#define SIZE 10

int q[SIZE];
int front=0, rear=0;

void insertq(int item)
{
 if((rear+1)%SIZE==front)
  printf("queue is full\n");
 else
 {
  rear=(rear+1)%SIZE;
  q[rear]=item;
  printf("inserted %d \n",item);
 } 
}

void deleteq()
{
if(front==rear)
 printf("queue is empty.\n");
else
{
front=(front+1)%SIZE;
printf("deleted item %d\n",q[front]);
 }
}

void searchq(int item)
{
 int i=(front+1)%SIZE;
 int pos=1;
 while(i!=(rear+1)%SIZE)
 {
  if(q[i]==item)
  {
   printf("found at pos %d\n",pos);
   return;
   }
   i=(i+1)%SIZE;
   pos++;
  }
  printf("not found\n");
}

int main()
{
 int item,opt=0;
 while(opt!=4)
 {
 printf("1.insert\n2.delete\n3.search\n4.exit\noption:");
 scanf("%d",&opt);
 switch(opt)
 {
case 1:
 printf("Data:");
 scanf("%d",&item);
 insertq(item);
 break;
 
case 2:
 deleteq();
 break;
 
case 3:
 printf("number to search:");
 scanf("%d",&item);
 searchq(item);
 break;
 
case 4:
 printf("program ended\n");
 break;
 
  default:printf("invalid option..\n");
 } 
}
 return 0;
 }
