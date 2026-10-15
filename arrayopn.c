#include<stdio.h>
int main()
{
 int a[50],n,i,j,pos, item, ch,temp;
 printf("enter the size:");
 scanf("%d",&n);
 printf("enter the elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 do
 {
 printf("\n1.Insertion\n2.Deletion\n3.Search\n4.Sort\n5.Display\n6.Exit\n");
 printf("enter the choice:");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:printf("enter the position and item:");
 scanf("%d%d",&pos,&item);
 for(i=n;i>=pos;i--)
 a[i]=a[i-1];
 a[pos-1]=item;
 n++;
 break;
 
 case 2:printf("enter the position:");
 scanf("%d",&pos);
 for(i=pos;i<n;i++)
 a[i]=a[i+1];
n--;
break;

case 3:printf("enter the element:");
scanf("%d",&item);
for(i=0;i<n;i++)
 if(a[i]==item)
   break;
 if(i<n)
  printf("found at position %d",i+1);
 else
 printf("not found");
 break;
 
 case 4:for(i=0;i<n-1;i++)
  for(j=0;j<n+1;j++)
   if(a[j]<a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
printf("sorted");
break;

 case 5:
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 break;
  
 case 6:
 break;
 default:printf("invalid choice");
}
}while(ch!=6);
return 0;
}
