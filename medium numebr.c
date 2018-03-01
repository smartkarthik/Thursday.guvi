#include<stdio.h>
void main()
{
int i,j,b,a[20],c;
printf(" \n Enter number of elements\n");
scanf("%d\n",&b);
printf("enter the elements\n");
for(i=0;i<b;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<b-1;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j])
{
 c=a[i];
 a[i]=a[j];
 a[j]=c;
}
}
}
printf("%d",a[b/2]);
return 0;
}
