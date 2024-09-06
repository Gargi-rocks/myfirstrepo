#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,a[100][100],n;
printf("enter limit");
scanf("%d",&n);
printf("enter elements\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
 {
 printf("a[%d][%d]=",i,j);
 scanf("%d",&a[i][j]);
 }
}
int k=0;
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
   if(i!=j)
    {
     a[i][j]=0;
    }
    if(j==(n-1)-i)
    {
    a[i][j]=786;
    }
  }
}
for(i=0;i<n;i++)
{
 for(j=0;j<n;j++)
 {
 printf("%d\t",a[i][j]);
 }
 printf("\n");
}
return(0);
}