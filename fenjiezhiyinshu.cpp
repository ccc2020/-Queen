#include  <iostream>
#include  <cmath>
using  namespace  std;

//判断是否为素数
int  isPrime(long  num)
{
int i,k=1;
    for( i=2;i<num/2;i++)
      { if(num%i==0) k=0 ;}
        return k;
}

//计算质因素分解，
void  factorization(long  n,long a[100],int&y)
{
int i,j;
  for(i= 2,j=0; i<=n ; )
{    if(isPrime(i)){ if(n%i== 0)    {     a[j++]=i ; y=j;        n /= i;        }
                           else     i++;   }     
     else i++;
}

        return;
}

int  main()
{
        long  n;
        long  factor[100];
        int  numofFactor  =  0;
        cin  >>  n;
        factorization(n,  factor,  numofFactor);
        for  (int  i  =  0;  i  <  numofFactor;  i++)
        {
                cout  <<  factor[i]  <<  "  ";
        }
        cout  <<  endl;
        return  0;
}
