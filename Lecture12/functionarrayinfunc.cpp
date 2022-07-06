#include <iostream>
using namespace std;
// function array pass 

// arrays by default pass by refrence hote hai
void updatearr(int b[],int n){
	// int n=sizeof(b)/sizeof(int);//2
	int i=0;
	while(i<n){//0<5
		b[i]=b[i]+10;//12 13 11 15 14
	i++;//5

	}

	cout<<"array inside updatearr funct"<<endl;

	for (int i = 0; i<n; ++i)
	{
		cout<<b[i]<<" ";//12 13 11 15 14
	}
	cout<<endl;
	



}

int main(){
	int arr[]={2,3,1,5,4};
	int n=sizeof(arr)/sizeof(int);//20/4


	updatearr(arr,n);

	// cout<<"array after updatearr funct"<<endl;

	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arr[i]<<" ";//12 13 11 15 14
	// }
	// cout<<endl;


	return 0;
}