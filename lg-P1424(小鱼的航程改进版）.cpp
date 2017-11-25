#include <iostream>
using namespace std;
int main()
{
	int x;unsigned long long s=0,n,step;
	cin>>x>>n;
	step=250;
	for (int i=0;i<n;i++)
	{
		if ((x!=6)&&(x!=7))
		{
			s+=step;
		}
		if (x==7)
		 x=1;
	    else
         x++;
	}
	cout<<s;
}
