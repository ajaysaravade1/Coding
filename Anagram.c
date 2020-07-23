#include<stdio.h>
#include<string.h>
void sort(char *s,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
}
int find_anagram(char *x,char *y)
{
	int len1 = strlen(x);
	int len2 = strlen(y);
	if(len1!=len2)
	{
		return 0;
	}
	sort(x,len1);
	sort(y,len2);
	int i=0,j=0;
	int flag=1;
	while(len1--)
	{
		if(x[i]!=x[j])
		{
			flag = 0;
			break;
		}
		i++;
		j++;
	}
	return flag;

}	
int main(int argc,char *argv[])
{
	char *first = argv[1];
	char *second = argv[2];
	int out = find_anagram(first,second);
	if(out == 0)
	{
		printf("Not an anagram \n");
	}
	else
	{
		printf("Anagram \n");
	}
//	printf("%s %s %d",first,second,out);
}
