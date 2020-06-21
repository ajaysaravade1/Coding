#include<iostream>
int main() {
	int i,j,n;
	std::cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0)
			{
				if(j==0 || j>=n/2)
				{
					std::cout<<"*";
				}
				else 
				{
					std::cout<<" ";
				}
				
			}
			else if(i<(n/2))
			{
				if(j==0 || j==(n/2))
				{
					std::cout<<"*";
				}
				else
				{
					std::cout<<" ";
				}
			}
			else if(i==(n/2))
			{
				std::cout<<"*";
			}
			else if(i!=(n-1) && i>=(n/2))
			{
				if(j==(n/2) || j==(n-1))
				{
					std::cout<<"*";
				}
				else
				{
					std::cout<<" ";
				}
			}
			
			else if(i==(n-1))
			{
				if(j<=(n/2) || j==(n-1))
				{
					std::cout<<"*";
				}
				else
				{
					std::cout<<" ";
				}	
			}	
		}
		std::cout<<std::endl;
	}

	return 0;
}
