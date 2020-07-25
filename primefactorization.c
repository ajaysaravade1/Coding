#include<stdio.h>
#include<math.h>
void prime_factorization(int n);
int main()
{
	int n;
	scanf("%d",&n);
	prime_factorization(n);
}
void prime_factorization(int n)
{
	int cnt;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cnt=0;
			while(n%i==0)
			{
				n=n/i;
				cnt++;
			}
			printf("num :%d %d \n",i,cnt);
		}
	}
	if(n!=1)
		printf("num :%d %d",n,1);
}
