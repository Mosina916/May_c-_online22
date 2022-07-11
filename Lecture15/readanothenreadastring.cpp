#include <iostream>
using namespace std;

int main(){
	// task is take a no then take a string
	char arr[1000];
	// char arr[]={}
	int no;
	cin>>no;
	cin.ignore();//ignore single character
	// cin.ignore();

	cin.getline(arr,1000);//\n

	cout<<no<<endl;
	cout<<arr<<endl;





		
	return 0;
}