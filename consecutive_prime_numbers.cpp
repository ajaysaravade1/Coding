#include<iostream>
#include<set>
int pro(int n);
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	cout<<pro(n);
	return 0;
}
int pro(int n)
{
	set<int> s;
	int flag;
	for(int i=2;i<n;i++)
	{
		flag=1;
		for(int j=2;j<=i/2;j++)
		{
			if(i!=j)
			{

				if(i%j==0)
				{
					flag=0;		
				}
			}
		}
		if(flag)
		{
			s.insert(i);
		}
	}
	int sum=0;
	int count=0;
	for(set<int>::iterator i=s.begin();i!=s.end();i++)
	{
		sum=sum + *i;
		if(s.find(sum)!=s.end() && sum!=2)
		{
			count++;
		}
	}
	return count;
}
