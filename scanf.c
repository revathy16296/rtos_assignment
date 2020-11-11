/* explore on scanf gets and fgets*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main()
{
char s[SIZE],a[SIZE],b[SIZE];
printf("enter the string\n");
scanf("%s",s);

/*printf("enter the string\n");
gets(a);*/

fgets(b,sizeof(b),stdin);
/*printf("scaned with scanf %s\n",a);*/
printf("scaned with scanf %s\n",b);
printf("scaned with scanf %s\n",s);
return 0;
}
