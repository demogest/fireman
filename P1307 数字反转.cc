#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
char n[1000];
int main()
{
   bool s;
   gets(n);
   int l=strlen(n)-1;
   if (n[0]=='-')
   {
   	 printf("-");
   	 s=1;
   }
   int t=l;
   while (n[t]=='0')
    t--;
   if (s==1)
    for (int i=t;i>=1;i--)
     printf ("%c",n[i]);
   else
    for (int i=t;i>=0;i--)
     printf ("%c",n[i]);
   return 0; 
     	
}
 