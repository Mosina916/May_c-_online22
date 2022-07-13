#include<iostream>
using namespace std;
int main(){

	// int arr[4][3]={
	// 	{3,4,6},
	// 	{9,12,17},
	// 	{14,15,20},
	// 	{30,60,40}

	// };

	// arr[0] -->starting address of ist bucket of 0th row
	// arr[1] -->starting address of ist bucket of ist row

	// cout<<arr[0]<<endl;//900 90B
	// cout<<arr[1]<<endl;//90C 917
	// cout<<arr[2]<<endl;//918 923
	// cout<<arr[3]<<endl;
	







	


	// // print 2d array

	// for(int i=0;i<=3;i++){
	// 		for(int j=0;j<=2;j++){
	// 		cout<<arr[i][j]<<" ";

	// }
	// cout<<endl;

	// }


	char arr[][5]={
		{'D','O','G','B','\0'},
		{'C','A','T','U','\0'},
		{'P','H','O','N','\0'}

	};

	// cout<<(void*)arr[0]<<endl;//DOGBCATUPHON
	// cout<<(void*)arr[1]<<endl;//CATUPHON
	// cout<<arr[2]<<endl;//PHON

	for(int i=0;i<=2;i++){
		cout<<arr[i]<<endl;
	}


	// cout<<arr[0]<<endl;//DOGB
	// cout<<arr[1]<<endl;//CATU
	// cout<<arr[2]<<endl;//PHON


	for(int i=0;i<=2;i++){
			for(int j=0;j<=3;j++){
			cout<<arr[i][j]<<" ";

	}
	cout<<endl;

	}















	return 0;
}