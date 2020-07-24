#include<stdio.h>
#include<math.h>
void find_factors(int n)
{
	for(int i=1;i<=(sqrt(n));i++)
	{
		if(n%i == 0)
		{
			printf("%d ",i);	
			if(i!=sqrt(n))
			{
				printf("%d ",n/i);
			}
		}

	}	
}
int main()
{
	int n;
	scanf("%d",&n);
	find_factors(n);
	return 0;
}
