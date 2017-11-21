#include <stdio.h>
int main()
{
	int n=0,k;
	double sn=0;
	scanf("%d",&k);
	do
	{
		n++;
		sn=sn+(1.00/n);
	}while(sn<=k);
	printf("%d",n);
	return 0;	
}
