#include<iostream>
using namespace std;
int main()
{
int h,r,i;
double Pi=3.14159;
cin>>h>>r;
double V; 
V=Pi*r*r*h;
if((20000/V)<=1)
i=1;
else
if((20000/V)>1)
i=20000/V+1;
cout<<i<<endl;
return 0;
}
