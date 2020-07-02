#include<stdio.h>
int main()
{
	
	int max_i,max_j,max=0;
	int n1,n2;
	int arr[100][100];
	int qualities[100][100]={0};
	
	
	scanf("%d %d",&n1,&n2);
	for (int i = 0; i < n1; i++)
	{
		for(int j=0; j <n2; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for (int i = 0; i < n1; i++)
	{
		for(int j=0; j <n2; j++)
		{
			if(i==0 && j==0)
			{
				continue;
			}
			else if(arr[i][j]==1)
			{
				for (int x = -1; x < 2; x++)
				{
					for (int y = -1; y < 2; y++)
					{
						if(x==0 && y==0)
						{
							continue;
						}
						else if((i+x)>=0 && (i+x) <n1 && (j+y)>=0 && (j+y) <n2)
						{
							if(arr[i+x][j+y]==1)
							{
								qualities[i][j]+=1;	
							}
						}
					}
				}
				//printf("max %d < qualities :%d  i:%d j:%d\n",max,qualities[i][j],i,j);
				if(max <qualities[i][j])
				{
					//printf("max %d = qualities :%d \n",max,qualities[i][j]);
					max=qualities[i][j];
					max_i = i;
					max_j = j;
				}
				
			}
		}
	}
	printf("%d:%d:%d \n",max_i+1,max_j+1,qualities[max_i][max_j]);

	
	return 0;
}