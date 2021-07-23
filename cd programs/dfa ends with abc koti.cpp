 // dfa ends with abc 
#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  char state='0'; 
  int i;
  printf("Enter input string:");
  scanf("%s",a);
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]=='a')
    {
      printf("a,q%c-->",state);
      if(state=='0')
      {
        state='1';
        printf("q%c \n",state);
      }
      else if(state=='1')
      {
        state='1';
        printf("q%c \n",state);
      }
      else if(state=='2')
      {
        state='1';
        printf("q%c \n",state);
      }
      else if(state=='3')
      {
        state='1';
        printf("q%c \n",state);
      }
    }
    else if(a[i]=='b')
    {
      printf("b, q%c -->",state);
      if(state=='0')
      {
        state='0';
        printf("q%c \n",state);
      }
      else if(state=='1')
      {
        state='2';
        printf("q%c \n",state);
      }
      else if(state=='2')
      {
        state='0';
        printf("q%c \n", state);
      }
      else if(state=='3')
      {
        state='0';
        printf("q%c \n",state);
        
      }}
      else if(a[i]=='c')
      {
        printf("c,q%c-->",state);
        if(state=='0')
        {
          state='0';
          printf("q%c \n",state);
          
        }
        else if(state=='1')
        {
          state='0';
          printf("q%c \n",state);
        }
        else if(state=='2')
        {
          state='3';
          printf("q%c \n",state);
        }
        else if(state=='3')
        {
          state='0';
          printf("q%c \n",state);
        }
    }
  }
  if(state=='3')
  {
    printf("Enterd string accepted \n");
    
  }
  else
  {
    printf("Entered string not accepted \n");
    printf("String does not end with abc \n");
    printf("DFA haults at q%c \n",state);
  }
  return 0;
}

/* sample output

Enter input string:abcdabc
a,q0-->q1
b, q1 -->q2
c,q2-->q3
a,q3-->q0
b, q0 -->q2
c,q2-->q3
Enterd string accepted

*/
