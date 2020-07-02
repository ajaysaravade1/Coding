#include<iostream>
int findnext(int prev1,int prev2);
int total_values_fun(int n);
void pattern(int n)
{
    //int n;
    //std::cin >>n;
    int arr[1000] ={6,28};
    int total_values = total_values_fun(n);
    int first=arr[0],second=arr[1];
    for(int i=2;i<total_values;i++)
    {
        arr[i]=findnext(second,first);
	first =second;
	second=arr[i];
    }
	int    k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {//space
            std::cout<<"   ";
        }
        for(int j=0;j<i+1;j++)
        {//number
            printf("%05d ",arr[k++]);
        }
        printf("\n");
    }
}
int findnext(int prev1,int prev2)
{
    return prev1*2-prev2+16;
}
int total_values_fun(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+ total_values_fun(n-1);
	}
}
int main()
{
    int n;
    int a[100];
    std::cin >>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        pattern(a[i]);
    }
}
