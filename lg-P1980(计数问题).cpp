#include <iostream>
using namespace std;
long pd(int a,int b)
{
	int j,s=0;
	for (int i=1;i<=a;i++)
	{
		j=i;
		while (j>0)
		{
			if (j%10==b)
			 s++;
			j=j/10;
		}
	}
	return s;
}
int main()
{
	ios::sync_with_stdio(0);
	int n,x,s;
	cin>>n>>x;
	s=pd(n,x);
	cout<<s;
	return 0;
}
