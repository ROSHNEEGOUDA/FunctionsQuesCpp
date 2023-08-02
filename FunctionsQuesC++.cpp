//Print all prime numbers between 2 given number
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num)
{
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}


//Fibonacci Sequence =>  0,1,1,2,3,5,8,...
#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    int nxtTerm;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        nxtTerm=t1+t2;
        t1=t2;
        t2=nxtTerm;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}


//Factorial of number n = n!=nx(n-1)x(n-2)x...x2x1
#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}


//Calculate nCr = n!/((n-r)! x r!)
#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}

//Pascal Triangle
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

