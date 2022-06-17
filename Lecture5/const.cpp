#include <iostream>
using namespace std;

int main(){
	int side=100;

	// int area=side*side;
	// area=area+50;


	// variables value fix -->const
	const int area=side*side;

	// const bool x=true;
	// x=false;

	// const int area;
	// area=side*side;
	// area=area+50;//error
	cout<<"area is "<<area<<endl;

	return 0;
}