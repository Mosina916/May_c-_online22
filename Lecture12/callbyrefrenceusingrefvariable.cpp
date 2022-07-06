#include <iostream>
using namespace std;
void update(int &u){
	u=u+60;
	cout<<"value of u inside update  is "<<u<<endl;//130

}

int main(){
	int h=70;
	cout<<"value of h inside main is "<<h<<endl;
	update(h);
	cout<<"value of h after update fun in  main is "<<h<<endl;//130


	
	
	return 0;
}