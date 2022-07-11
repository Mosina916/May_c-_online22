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
bool ispalindromeornot(char arr[]){
	int i=0;
	int j=lengthofarr(arr)-1;//5

// loop
	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;

	}
	else{
		return false;
	}

	}
	return true;
	


}
int main(){
	// char arr[]={'H','E','L','L','O','\0'};
	char arr[]="nitin";//5
	// char arr[100];
	// cin>>arr;

	// cin.getline(arr,100);



	if(ispalindromeornot(arr)==true){
		cout<<"yes palindrome"<<endl;

	}
	else{
		cout<<"Not palindrome "<<endl;
	}





	

	return 0;
}