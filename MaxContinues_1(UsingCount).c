#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int count_zero;
	printf("Enter count of zeros\n");
	scanf("%d",&count_zero);
	int a,b;
	int max = 0;
	for(int i=0;i<n;i++)
	{
		
		int cz = 0;
		int j;
		for(j=i;j<n;j++)
		{
			if(arr[j] == 1)
				continue;
			if(arr[j] == 0 && cz < count_zero)
			{
				cz++;
			}
			else
				break;
			
		}
		if(j-i > max)
		{
			max = j-i;
			b = j-1;
			a = b - max+1;
		}
	}
	printf("%d %d\n",a,b);
	return 0;
}
