#include<iostream>
using namespace std;
// int* f(int n){
// 	int*aptr=new int[n];
// 	for (int i = 0; i <n; ++i)
// 	{
// 		cin>>aptr[i];
// 	}

// 	return aptr;


// }
// sma
// int* f(int n){//4
// 	int arr[n];//4
// 	for (int i = 0; i <n; ++i)
// 	{
// 		cin>>arr[i];
// 	}

// 	return arr;


// }
int main(){
	int n;
	cin>>n;
	int*pptr=f(n);


	for (int i = 0; i <n; ++i)
	{
		cout<<pptr[i]<<" ";
	}
	cout<<endl;

	delete []pptr;
	pptr=NULL;












	return 0;
}