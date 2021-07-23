#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s[30],st[30];
int  main()	
{
	char tab[5][6][5]={"ta","@","@","ta","@","@","@","+ta","@","@","!","!","fb","@","@","fb","@","@","@","!","*fb","@","!","!","i","@","@","(e)","@","@"};
	printf("Enter the string:\n");
	scanf("%s",s);
	strcat(s,"$");
	st[0]='$';
	st[1]='e';
	int st_i,s_i,i,j,k,n,s1,s2;
	st_i=1;
	s_i=0;
	char temp[20];
	printf("\nStack  Input\n");
	while(st[st_i]!='$' || s[s_i]!='$')
	{
		switch(st[st_i])
		{
			case 'e':s1=0;break;
			case 'a':s1=1;break;
			case 't':s1=2;break;
			case 'b':s1=3;break;
			case 'f':s1=4;break;
			default:s1=-1;
		}
		switch(s[s_i])
		{
			case 'i':s2=0;break;
			case '+':s2=1;break;
			case '*':s2=2;break;
			case '(':s2=3;break;
			case ')':s2=4;break;
			case '$':s2=5;break;
			default:s2=-1;
		}
		if(s1==-1 || s2==-1)
		{
			printf("Failure");
			exit(0);
		}
		if(tab[s1][s2]=="@")
		{
			printf("Failure");
			exit(0);
		}
		if(tab[s1][s2][0]=='!')
		{
			st[st_i]='\0';
			st_i--;
		}
		else
		{
			j=strlen(tab[s1][s2]);
			for(k=0;tab[s1][s2][k]!='\0';k++)
			{
				temp[j-k-1]=tab[s1][s2][k];
			}
			temp[j]='\0';
			st[st_i]='\0';
			strcat(st,temp);
			st_i=strlen(st)-1;
		}
		printf("%s ",st);
		for(n=s_i;s[n]!='\0';n++)
			printf("%c",s[n]);
		printf("\n");
		if(st[st_i]==s[s_i] && s[s_i]!='$')
		{
			st[st_i]='\0';
			s_i++;
			st_i--;
		}
	}
	printf("Success");
}

