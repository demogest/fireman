#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
void read(int &a)//输入优化 
{
	char s=getchar();int f=1;a=0;
	while(s<'0'||s>'9')
	{
		if(s=='-')
		 f=-1;
	    s=getchar();
	}
	while (s>='0'&&s<='9')
	{
		a=a*10+s-'0';
		s=getchar();
	}
	a*=f;
}
void print (int a)//输出优化 
{
	if (a<0)
	{
		putchar('-');
		a=-a;
	}
	if (a>9)
	 print (a/10);
    putchar (a%10+'0');
}
/*int poww(int a,int b)
{
	int ans=1,base=a;
	while (b!=0)
 {
 	if (b&1)
 	 ans*=base;
  	base*=base;
  	b>>=1;
 }
 return ans;
}
int main()
{
	int a[101],b[101],n;
	read(n);
	for (int i=0;i<n;i++)
	{
		a[i]=0;b[i]=0;
	}
	for (int i=0;i<n;i++)
	 read(a[i]);
    for (int i=0;i<n;i++)
    {
    	for (int j=0;j<=i;j++)
    	{
	    	(a[j]<a[i])&&(b[i]++);
	    }
    }
    for (int i=0;i<n;i++)
    {print(b[i]);cout<<" ";}
    return 0;
}*/
