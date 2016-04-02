#include <iostream>
using namespace std;
int main()
{
	int n,H,M,L;
	cin>>n;
	H=n/100;
	M=(n/10)%10;
	L=n%100%10;
	cout<<H<<endl;
	cout<<M<<endl;
	cout<<L<<endl;


	return 0;
}
