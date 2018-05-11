#include<stdio.h>

int tongle(int n)
{
	int t=0;
	for(int i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
			t=t+i;
		}
	}	
	return t;
}
