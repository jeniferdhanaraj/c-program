#include<stdio.h>
#include<conio.h>
int main()
{
char str1[10],str2[10],str3[10];
clrscr();
printf("enter the strings");
scanf("%s\n %s\n %s\n",str1,str2,str3);
if((str1[0]=str2[0]=str3[0])||(str1[1]=str2[1]=str3[1]))
{
printf("yes");
}
elseif((str1[0]=str1[1])&&(str2[0]=str2[1])&&(str3[0]=str3[1]))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

