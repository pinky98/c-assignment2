#include <iostream>
using namespace std;

int main() {
	// your code goes here
   //creating three variables
   int y,w,d,x;
   cout<<"enter the number of days"<<endl;
   cin>> x;
   y=x/365;
   w=(x-(y*365))/7;
   d=x-(y*365)-(w*7);
   cout<<"the number of years is "<<y<<endl;
   cout<<"the number of weeks is "<<w<<endl;
   cout<<"the number of days is "<<d;
   
