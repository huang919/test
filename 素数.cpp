#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a[10000];
	int i,m,n,r,b;
	a[1] = 1;
	a[2] = 1;
	a[3] = 1;
	for (i = 4; i <= 10000; i++)
	{
		n = sqrt(i);
		a[i] = 0;
		for (m = 2; m <= n; m++)
		{
			if (a[m] == 1)
			{
				b=i%m;
				if (b == 0)
				{
					r = 0;
					break;
				}
				else
				{
					r = 1;
				}
			}
			if(a[m]==0)
			r=1; 
		}
		if (r == 1)
		{
			a[i] = 1;
		}
	}
	for (i = 1; i <= 10000; i++)
	{
		if (a[i] == 1)
			printf("%8d  ", i);
	}
	return 0;
}

