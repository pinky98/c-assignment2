#include <iostream>
using namespace std;

int main() {
	float p,r,t,i;
	cout<<"principle = "<<endl;
	cin>>p;
	cout<<"rate = "<<endl;
	cin>>r;
	cout<<"time = "<<endl;
	cin>>t;
	i=p*r*t/100;
	cout<<"simple interest = "<<i;
	return 0;
}
