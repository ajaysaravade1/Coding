#include<iostream>
using namespace std;
long long gcd(long long a,long long b)
{
	if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}

long long lcm(long long a,long long b)
{
    return a*b/gcd(a,b);
}

void func(long long n)
{
    long long sum=0;
    for(long long i =1;i<=n;i++)
    {
        sum = sum + lcm(i,n);
    }
    printf("%lld ",sum);
}
int main()
{
	long long  n;
	cin >> n;
	func(n);
	return 0;
}
