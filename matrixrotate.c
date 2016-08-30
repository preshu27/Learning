/* rotate a give matrix by 90 */
#include<stdio.h>
int main()
{
	int c,r,a[10][10],i,j;
	printf("enter no. of rows\n");
	scanf("%d",&r);
	printf("enter no. of columns \n");
	scanf("%d",&c);
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[j][c-1-i]);
		}
		printf("\n");
	}
	return 0;
}
	
