#include<stdio.h>
#include<string.h>
#define Max 20
int main()
{
	char g[20],p1[20],p2[20],mg[20],ng[20],tg[20];
	int i,j=0,k=0,l=0,pos;
	printf("Enter production:A->");
	fgets(g,Max,stdin);
	for(i=0;g[i]!='|';i++,j++)
		p1[j]=g[i];
	p1[j]='\0';
	for(j=++i,i=0;g[i]!='\0';j++,i++)
		p2[i]=g[i];
	p2[i]='\0';
	for(i=0;i<strlen(p1)||i<strlen(p2);i++)
	{
		if(p1[i]==p2[i])
		{
			mg[k]=p1[i];
			k++;
			pos=i+1;
		}
	}
	for(i=pos,j=0;p1[i]!='\0';i++,j++)
		ng[j]=p1[i];
	ng[j++]='1';
	for(i=pos;p2[i]!='\0';i++,j++)
		ng[j]=p2[i];
	mg[k]='X';
	mg[++k]='\0';
	ng[j]='\0';
	printf("\nA->%s",mg);
	printf("\nX->%s\n",ng);
}

