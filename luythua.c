#include<stdio.h>
#include<math.h>
int luythua(int x, int n)
{ 	int lt=1;
	for(int i=1;i<=n;i++)
		{
			lt=lt*x;
		}
	return lt;
}
