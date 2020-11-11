/* explore on scanf gets and fgets*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main()
{
char s[SIZE];
printf("enter the string\n");
fgets(b,sizeof(b),stdin);
printf("scaned with fgets %s\n",b);
return 0;
}