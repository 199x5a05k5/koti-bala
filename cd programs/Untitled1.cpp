#include <iostream>
#include <cmath>
using namespace std;

int middleDigit(int n)
{
    int digits = (int)log10(n) + 1;
    n = (int)(n / pow(10, digits / 2))% 10;
    return n;
}

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

int getProduct(int n)
{
    int product = 1;
 
    while (n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }
 
    return product;
}

int main()
{
    int n,t,i,s,p,r;
    cin>>n;
    while(n>0)
    {
        t=0;
        cin>>t;
        if(t==1)
            cout<<1;
        else
        {
            int test=pow(10,t-1);
            int max=pow(10,t);
            for(i=test;i<max;i++)
            {
                if(middleDigit(i)!=0)
                {
                    
                    s=getSum(i);
                    p=getProduct(i);
                    if(p>=s)
                    {
                        cout<<i;
                        break;
                    }
                }
            }
        }
            
        n--;
    }

    return 0;
}

