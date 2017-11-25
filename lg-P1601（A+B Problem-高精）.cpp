#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char a1[100],b1[100];
	int a[100],b[100],c[100],la,lb,lc,i,x;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	cin>>a1>>b1;
	la=strlen(a1);
	lb=strlen(b1);
	for (i=0;i<=la-1;i++)
	 a[la-i]=a1[i]-48;
    for (i=0;i<=lb-1;i++)
     b[lb-i]=b1[i]-48;
    lc=1;
    x=0;
    while (lc<=la||lc<=lb)
    {
    	c[lc]=a[lc]+b[lc]+x;
    	x=c[lc]/10;
    	c[lc]%=10;
    	lc++;
    }
    c[lc]=x;
    if (c[lc]==0)
     lc--;
    for (i=lc;i>=1;i--)
     cout<<c[i];
    cout<<endl;
    return 0;
}
