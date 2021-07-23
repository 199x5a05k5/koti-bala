//Aim: Implementation of Type checking using C programming.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>	
int main()
{   
	int n,i,k,flag=0;
	char var[15],typ[15],b[15],c,s[2];
	printf("Enter the number of variables:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the variables [%d]:\n",i);
		scanf(" %c",&var[i]);
		printf("Enter the variable-type [%d] (float-f,int-t):",i);
		//scanf("%c %c",&var[i],&typ[i]);
		scanf(" %c",&typ[i]);
		/*scanf("%s",s);
		strcpy(var[i],s[0]);
		strcpy(var[i],s[1]);*/
		if(typ[i]=='f')
			flag=1;
	}
	printf("Enter the expression (end with $):");
	i=0;
	getchar();
	while((c=getchar())!='$')
	{
		b[i]=c;
		i++;
	}
	k=i;
	for(i=0;i<k;i++)
	{
		if(b[i]=='/')
		{
			flag=1;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(b[0]==var[i])
		{
			if(flag==1)
			{
				if(typ[i]=='f')
				{
					printf("\nThedatatype is correctly defined..\n");
					break;
				}
				else
				{
					printf("Identifier %c must be a float type..\n",var[i]);
					break;
				}
			}
			else
			{
				printf("\nThe data is correctly defined");
				break;
			}
		}
	}
	return 0;
}
/*
OUTPUT:
Enter the number of variables: 4
Enter the variable[0]:A
Enter the variable-type[0](float-f,int-i):i
Enter the variable[1]:B
Enter the variable-type[1](float-f,int-i):i
Enter the variable[2]:C
Enter the variable-type[2](float-f,int-i):f
Enter the variable[3]:D
Enter the variable-type[3](float-f,int-i):i
Enter the expression(end with $):
A=B*C/D$
Identifier A must be a float type..!
*/
