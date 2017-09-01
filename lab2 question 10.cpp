#include <iostream>
using namespace std;

int main() {
	float a,b,c,d,e,f,g,h,i;
	cout<<"marks in english "<<endl;
	cin>>a;
	cout<<"marks in math "<<endl;
	cin>>b;
	cout<<"marks in physics "<<endl;
	cin>>c;
	cout<<"marks in che "<<endl;
	cin>>d;
	cout<<"marks in bio "<<endl;
	cin>>e;
	f=a+b+c+d+e;
	g=(a+b+c+d+e)/5;
	cout<<"total of max mark of each subject "<<endl;
	cin>>h;
	i=(f/h)*100;
	cout<<"total marks is "<<f;
	cout<<"average marks is "<<g;
	cout<<"percentage mark is "<<i;
	
	
	
	return 0;
}
