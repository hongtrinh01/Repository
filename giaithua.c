#include<stdio.h>

long giaithua(int n)
{
	long gt=1;
	for(int i=0;i<n;i++)
		gt=gt*i;
	return gt;
}
