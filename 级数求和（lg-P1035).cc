#include <iostream>
using namespace std;
int main()
{
	int n=0,k;
	double sn=0;
	cin>>k;
	do
	{
		n++;
		sn=sn+(1.00/n);
	}while(sn<=k);
	cout<<n;
	return 0;	
}
