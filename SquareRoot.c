#include<stdio.h>
int main()
{
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	int l = 1, r = n/2,mid,ans=0;
	while( l <= r )
	{
		mid = (l+r)/2;
		if(mid * mid == n)
		{
			ans = mid;
			break;
		}
		else if(mid * mid > n)
			r = mid - 1;
		else
		{
			ans = mid;
			l = mid + 1;
		}
	}
	printf("%d\n",ans);
}
