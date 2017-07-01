#include<stdio.h>
#include<string.h>
int main()
{
int i,j,k;
cha str[1000];
char rev[1000];
printf("Enter a string");
scanf("%s",&str);
printf("The original string is %s",str);
for(i=0;str[i]!='\0';i++)
{
k=i-1;
}
for(j=0;j<=i-1;j++)
{
rev[j]=str[k];
k--;
}
printf("The reverse string is %s",rev);
return 0;
}
