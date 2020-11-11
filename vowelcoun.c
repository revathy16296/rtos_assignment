# include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/wait.h>

#define SIZE 10

int main(int argc,char *argv[])
{
	int pid;
	
	pid=fork();
	if (pid<0)
	{
		printf("the child creation failed");
	}
	else if(pid==0)
	{
		printf("inside child with pid no: %d\n",getpid());
			
	}
else
{
	wait(NULL);
}
char s[SIZE];
int vowel[5],n,i;
s==argv[1];
fgets(s,sizeof(s),stdin);

n=strlen(s);
for (i=0;i<5;i++)
vowel[i]=0;
{
for(i=0;i<n;i++)
{
  switch (s[i])
     {case 'a':
     vowel[0]++;
     break;
     case 'A':
     vowel[0]++;
     break;
     case 'e':
     vowel[1]++;
      break;
      case 'E':
      vowel[1]++;
      break;
      case 'i':
      vowel[2]++;
      break;
      case 'I':
       vowel[2]++;
   break;
case'o':
vowel[3]++;
break;
case'O':
vowel[3]++;
break;
case 'u':
vowel[4]++;
break;
case 'U':
vowel[4]++;
break;
}
}}
printf("no of vowel a : %d\n",vowel[0]);
printf("no of vowel e : %d\n",vowel[1]);
printf("no of vowel i : %d\n",vowel[2]);
printf("no of vowel o : %d\n",vowel[3]);
printf("no of vowel u : %d\n",vowel[4]);
return 0;
}