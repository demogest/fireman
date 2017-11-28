#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int a[20],b,c;
	for (int i=1;i<=14;i++)
	 cin>>a[i];
	b=0;c=0;
	a[0]=0;
	for (int i=1;i<=14;i+=2)
	{
		c++;
		if (a[i+1]+a[i]>a[0]&&a[i+1]+a[i]>8)
		 {
		 	a[0]=a[i]+a[i+1];
		 	b=c;
		 }

	}
	cout<<b;
}
