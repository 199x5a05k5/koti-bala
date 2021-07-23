// dfa ends with abc 
#include <stdio.h>
#include <string.h>
int main()
{
  char a[100],state[2];
  state[0]='q';
  state[1]='0';
  int i;
  printf("Enter input string:");
  scanf("%s",a);
  for(i=0;i<strlen(a);i++)
  {
    if(a[i]=='a')
    {
      printf("a,%c%c-->",state[0],state[1]);
      if(state[1]=='0')
      {
        state[1]='1';
        printf("%c%c \n",state[0],state[1]);
        
      }
      else if(state[1]=='1')
      {
        state[1]='1';
        printf("%c%c \n",state[0],state[1]);
      }
      else if(state[1]=='2')
      {
        state[1]='1';
        printf("%c%c \n",state[0],state[1]);
      }
      else if(state[1]=='3')
      {
        state[1]='1';
        printf("%c%c \n",state[0],state[1]);
      }
    }
    else if(a[i]=='b')
    {
      printf("b, %c%c -->",state[0],state[1]);
      if(state[1]=='0')
      {
        state[1]='0';
        printf("%c%c \n",state[0],state[1]);
      }
      else if(state[1]=='1')
      {
        state[1]='2';
        printf("%c%c \n",state[0],state[1]);
      }
      else if(state[1]=='2')
      {
        state[1]='1';
        printf("%c%c \n", state[0],state[1]);
      }
      else if(state[1]=='3')
      {
        state[1]='1';
        printf("%c%c \n",state[0],state[1]);
        
      }}
      else if(a[i]=='c')
      {
        printf("c,%c%c-->",state[0],state[1]);
        if(state[1]=='0')
        {
          state[1]='0';
          printf("%c%c \n",state[0],state[1]);
          
        }
        else if(state[1]=='1')
        {
          state[1]='0';
          printf("%c%c \n",state[0],state[1]);
        }
        else if(state[1]=='2')
        {
          state[1]='3';
          printf("%c%c \n",state[0],state[1]);
        }
        else if(state[1]=='3')
        {
          state[1]='0';
          printf("%c%c \n",state[0],state[1]);
        }
    }
  }
  if(state[1]=='3')
  {
    printf("Enterd string accepted \n");
    
  }
  else
  {
    printf("Entered string not accepted \n");
    printf("String does not end with abc \n");
    printf("DFA haults at %c %c \n",state[0],state[1]);
  }
  return 0;
}

/* sample output

Enter input string:abcdabc
a,q0-->q1
b, q1 -->q2
c,q2-->q3
a,q3-->q1
b, q1 -->q2
c,q2-->q3
Enterd string accepted

*/
