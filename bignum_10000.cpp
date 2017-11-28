#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstring>
#include<cmath>
#define JZ 10000
#define WS 4
using namespace std;

const int MAXN=4002;
int a[MAXN],b[MAXN],c[MAXN],d[MAXN];
int i,j,k,x;
void init(int a[])
{
	string s;
	int tmp[MAXN];
	memset(tmp,0,sizeof(tmp));
	cin>>s;
	tmp[0]=s.length();
	for(i=1;i<=tmp[0];i++)
	{
		tmp[i]=s[tmp[0]-i]-'0';
	}
	a[0]=tmp[0]/WS;
	if(tmp[0]%WS) ++a[0];
	
	for(i=1;i<=a[0];i++)
	{
		for(j=i*WS;j>i*WS-WS;j--)
		{
			a[i]=a[i]*10+tmp[j];
		}
	}
}
void print(int a[])
{
	int i;
	if(a[0]==0){cout<<0<<endl;return;}
	cout<<a[a[0]];
	for(i=a[0]-1;i>0;i--) cout<<setw(WS)<<setfill('0')<<a[i];
	cout<<endl;
	return;
}
int compare(int a[],int b[])
{
	//比较a和b的大小，若a>b则返回1，若a<b则返回-1,若a=b则返回0;
	int i;
	if(a[0]>b[0])return 1;
	if(a[0]<b[0])return -1;
	for(i=a[0];i>0;i--)
	{
		if(a[i]>b[i])return 1;
		if(a[i]<b[i])return -1;
	}
	return 0;
}
void jia(int a[],int b[],int c[])
{
	int x=0;
	c[0]=1;
	while(c[0]<=a[0]||c[0]<=b[0])
	{
		c[c[0]]=a[c[0]]+b[c[0]]+x;
		x=c[c[0]]/JZ;
		c[c[0]]%=JZ;
		c[0]++;
	}
	c[c[0]]=x;
	if(c[c[0]]==0) c[0]--;
}
/*
void jiadi(int a[],int b)
{
	int i;
	a[1]+=b;
	for(i=1;i<=a[0];i++)
	{
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	if(a[i]) a[0]++;
	while(a[a[0]]>=10)
	{
		a[a[0]+1]=a[a[0]]/10;
		a[a[0]]%=10;
		a[0]++;
	}
	
}
void jian(int a[],int b[])
{
	int flag,i;
	flag=compare(a,b);
	if(flag==0){a[0]=0;return;
	}
	if(flag==1){
		for(i=1;i<=a[0];i++)
		{
			if(a[i]<b[i]){
				a[i+1]--;a[i]+=10;//向上借位 
			}
			a[i]-=b[i]; 
		}
		while(a[0]>0&&a[a[0]]==0) a[0]--;//去前导0; 
	}
}

void chenggao(int a[],int b[],int c[])
{
	int i,j;
	for(i=1;i<=a[0];i++)
	{	
		for(j=1;j<=b[0];j++)
		{
			c[i+j-1]+=a[i]*b[j];
		}
	}
	c[0]=a[0]+b[0];
	for(i=1;i<=c[0];i++)
	{
		c[i+1]+=c[i]/10;
		c[i]%=10;		
	}
	while(c[0]>0&&c[c[0]]==0)c[0]--;
	return;		
}
void chengdi(int a[],int b,int c[])
{
	int i;
	for(i=1;i<=a[0];i++)
	{	
		c[i]=a[i]*b;	
	}
	c[0]=a[0]+10;//10为int在十进制中的最大长度 
	for(i=1;i<=c[0];i++)
	{
		c[i+1]+=c[i]/10;
		c[i]%=10;		
	}
	while(c[0]>0&&c[c[0]]==0)c[0]--;
	return;		
}
void chudi(int a[],int b,int c[])
{
	int i,x;
	x=0;
	c[0]=a[0];
	for(i=a[0];i>0;i--)
	{	
		c[i]=(x*10+a[i])/b;
		x=(x*10+a[i])%b;
	}
	while(c[0]>0&&c[c[0]]==0)c[0]--;
	return;		
}
void numcpy(int p[],int q[],int det)//复制p数组到q数组，从det开始的地方
{
	for(int i=1;i<=p[0];i++)q[i+det-1]=p[i];
	q[0]=p[0]+det-1;
} 
void chugao_mod(int a[],int b[],int c[],int d[])
{
	int i,tmp[MAXN];
	c[0]=a[0]-b[0]+1;
	for(i=c[0];i>0;i--)
	{
		memset(tmp,0,sizeof(tmp));
		numcpy(b,tmp,i);
		while(compare(a,tmp)>=0){
			c[i]++;
			jian(a,tmp);
		}
	}
	while(c[0]>0&&c[c[0]]==0)c[0]--;
	numcpy(a,d,1);
	return;		
}
*/
int main()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	init(a);
	init(b);
	jia(a,b,c);
	//chenggao(a,b,c);

	
	//chudi(a,x,c);
	print(c);
	//print(d);
	return 0;
}
