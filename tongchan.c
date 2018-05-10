#include<stdio.h>

int tongchan(int n)
{
	int s=0;
	while(n>0)
	{
		int t = n % 10;
		if(t%2==0)
			s+=t;
		n=n/10;
	}
}
