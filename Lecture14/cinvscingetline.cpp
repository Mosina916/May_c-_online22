#include<iostream>
using namespace std;

int main(){
	char arr[100];
	// cin>>arr;
	// cout<<arr<<endl;

	char ch;
	// cin>>ch;//'C'
	ch=cin.get();
	int i=0;

	// while(ch!='\n'){
	// while(ch!='$'){
	// 	arr[i]=ch;//s
	// 	i++;
	// 	// cin>>ch;//'0'
	// 	ch=cin.get();//'\n'

	// }

	// arr[i]='\0';

	// cout<<arr<<endl;

	// // cin.getline(arrname,arraysize);
	// cin.getline(arr,100);//by default 3rd argument '\n'
	// cout<<arr<<endl;


	cin.getline(arr,100,'$');
	cout<<arr<<endl;


	






	
	

	return 0;
}