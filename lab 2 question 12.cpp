
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float p,r,t,i;
	cout<<"principle = "<<endl;
	cin>>p;
	cout<<"rate = "<<endl;
	cin>>r;
	cout<<"time = "<<endl;
	cin>>t;
	i=(p*(pow((1+r/100),t))-p);
	cout<<"compound interest = "<<i;
	return 0;
}
