#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,len;
scanf("%d %d",&m,&n);
if(n>k)
{len=n}
else
{
len=k
}
for(i=len;i>=2;i--)
{
if(n%1==0 && k%i==0)
{
printf("%d",i);
}
}

}
