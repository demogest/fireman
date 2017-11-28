#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	int a=300,b=0,c=0,m,d=0;
	for (int i=1;i<=12;i++)
	{
		cin>>m;
		b=a-m;
		if (b<0)
		{
			d=0-i;
			break;
		}
		if (b>=100)
		{
			c=c+b/100*100;
			b=b-b/100*100;
		}
		a=b+300;
	}
	if (d<0)
	 cout<<d;
	else
	 cout<<c*1.2+b;
	return 0;
}
