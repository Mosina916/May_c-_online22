#include <iostream>
using namespace std;
int lengthofarr(char arr[]){
	int i=0;
	int c=0;
// loop
	while(arr[i]!='\0'){
		c++;//5
		i++;//5

	}
	return c;
	
}
// int arr[]={5,3,6,7,5,8};
int main(){
	// char arr[]={'H','E','L','L','O','\0'};
	// char arr[]="hello";//5
	char arr[100];
	// cin>>arr;

	cin.getline(arr,100);



	cout<<lengthofarr(arr)<<endl;




	

	return 0;
}