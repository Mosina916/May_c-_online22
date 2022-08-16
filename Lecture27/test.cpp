#include<iostream>
using namespace std;
int main(){
	// sma
	// int n;
	// n=10;
	// cout<<n<<endl;


	char arr[100];
	cin>>arr;
	cout<<arr<<endl;


	// dma creating variables

	 // int*ptr=new int;
	 // *ptr=10;
	 // cout<<*ptr<<endl;


	 // float*fptr=new float;
	 // *fptr=10.34;
	 // cout<<*fptr<<endl;

	 // char*chptr=new char;
	 // *chptr='A';
	 // cout<<*chptr<<endl;


	 char*arrptr=new char[100];
	 // cin>>arrptr;
	 // cout<<arrptr<<endl;
	 int n;
	 cin>>n;

	for (int i = 0; i <n; ++i)
	{
		cin>>arrptr[i];
	}



	cout<<arrptr<<endl;


	// for (int i = 0; i <n; ++i)
	// {
	// 	cout<<arrptr[i];
	// }




	 // delete nameofthepointer
	 // delete ptr;
	 // ptr=NULL;


	 // delete fptr;
	 // fptr=NULL;

	 // delete chptr;
	 // chptr=NULL;




	 // sma array
	 // int arr[100];
	 // int n;
	 // cin>>n;
	 // for (int i = 0; i <n; ++i)
	 // {
	 // 	cin>>arr[i];
	 // }


// // dma 1d array
	 // int*aptr=new int[10000000];
// 	  int n;
// 	 cin>>n;
// 	 for (int i = 0; i <n; ++i)
// 	 {
// 	 	cin>>aptr[i];
// 	 }

// 	  for (int i = 0; i <n; ++i)
// 	 {
// 	 	cout<<aptr[i]<<" ";
// 	 }
// 	 cout<<endl;


	 // 	 float*ptr=new float[10000000];
	 //  int n;
	 // cin>>n;
	 // for (int i = 0; i <n; ++i)
	 // {
	 // 	cin>>ptr[i];
	 // }

	 //  for (int i = 0; i <n; ++i)
	 // {
	 // 	cout<<ptr[i]<<" ";
	 // }
	 // cout<<endl;


	 // // delete []pointer 
	 // delete[]aptr;
	 // aptr=NULL;


	 // int n;
	 // cin>>n;
	 // int arr[n];-->this is wrong


	 // dma
	 // int n;
	 // cin>>n;
	 // int*aptr=new int[n];//

















	return 0;
}