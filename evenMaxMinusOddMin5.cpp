#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	int c[6],i=0;
	int a=1,b=100;
	for(i=0;i<6;i++)
	{
		cin>>c[i];
		if(c[i]%2==1 && c[i]>a)
			a=c[i];
		else if(c[i]%2==0 && c[i]<b)
			b=c[i];
	}
	cout<<abs(a-b)<<endl;
	return 0;
}


