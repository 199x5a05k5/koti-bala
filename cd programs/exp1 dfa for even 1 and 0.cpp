// dfa for even number of 0's and 1's 

/*
#include<stdio.h>
#include<conio.h>	
int main()
{
	int n,i,count=0,count1=0,a[10];
	printf("Enter size of string:");
scanf("%d",&n);
printf("Enter string:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	if(a[i]==0)
		count++;
	else
		count1++;
}
if((count%2)==0 && (count1%2)==0)
	printf("String accepted, Because it contains even 0's and even 1's");
else if((count%2)==0  && (count1%2)!=0)
	printf("String is not accepted, because it contains even 0's and odd 1's");
else if((count%2)!=0 && (count1%2)==0)
	printf("String is not accepted, because it contains odd 0's and even 1's");
else
	printf("String is not accepted, because it contains odd 0's and odd 1's");
getch();
return 0;
}
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k,c1=0,c2=0,a[100];
	printf("Ente the size of the string: \n");
	scanf("%d",&n);
	printf("Enter String of size %d :\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		    c1++;
		else
		    c2++;
	}
	if(c1%2==0&&c2%2==0)
	{
		printf("Entered string is accepted ");
	}
	else
	{
		printf("Entered string is not accepted ");
	}
	printf("0==%d   1==%d",c1,c2);
	return 0;
}

