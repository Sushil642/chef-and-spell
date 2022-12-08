#include <iostream>
using namespace std;
int greatest(int a,int b,int c)
{
    if(a>b)
   return (a>c)?a:c;
    
    else
   return (c<b)?b:c;
    
}
int secondmax(int a,int b,int c)
{
    if(a>b && a>c)
   return (b>c)?b:c;
   
   else if(b>c)
   {
       return (b>a)?(a>c?a:c):b;
   }
   else
   {
       if(c>b)
   return (c>a)?((a>b)?a:b):c;
   }
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	   int g= greatest(x,y,z);
	   int s= secondmax(x,y,z);
	   cout<<g+s<<endl;
	}
	return 0;
}
