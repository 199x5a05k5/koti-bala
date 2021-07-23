 //Aim: Implementation of Stack Allocation Strategy using C programming.
#include<stdio.h>
int stack[100],ch,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
	{
		top=-1;
		printf("Enter the size of stack[MAX=100]");
	scanf("%d",&n);
	printf("\n\t stack   opertaions:");
	printf("\n\t--------------------------:");
	printf("\n\t 1.push\t2.pop\t 3.display\t4.EXIT\t");
		do
		{
		printf("\n Enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:printf("\n\tExit");break;
			default:printf("Please nter a valid choice:");
		}
		}while(ch!=4);
		return 0;
	}

void push()
	{
		if(top>=n-1)
			printf("\n\n stack overflow");
		else
		{	
			printf("Enter a value to be pushed");
			scanf("%d",&x);
			stack[++top]=x;
		}	
	}

void pop()
	{
		if(top==-1)
		printf("\n\t stack underflow");
		else
		{
		printf("\n\t the popped element is %d",stack[top--]);
		}
	}

void display()
	{
	if(top>=0)
	{
		printf("\n The elements in stack\n");
		for(i=top;i>=0;i--)
			printf("\n%d",stack[i]);
	}
	else
	{
		printf("\n the stack is empty");
	}	
}
/*
OUTPUT:
Enter the size of STACK[MAX=100]:10

STACK OPERATIONS USING ARRAY
1.PUSH
2.POP
3.DISPLAY
4.EXIT
Enter the choice:1
Enter a value to be pushed:12
Enter the choice:1
Enter a value to be pushed:24
Enter the choice:1
Enter a value to be pushed:98
Enter the choice:3
The elements in STACK
98
24
12
Press Next Choice
Enter the choice:2
	The popped elements is 98
Enter the choice:3
The elements in STACK
24
12
Press Next Choice
Enter the choice:4
	EXIT POINT
*/
