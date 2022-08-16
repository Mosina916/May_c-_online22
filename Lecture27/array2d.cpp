#include<iostream>
using namespace std;
int main(){
	// sma

	// int arr[100][100];
	// int rows,cols;
	// cin>>rows>>cols;
	// int arr[rows][cols];//10^3
	// for (int i = 0; i <rows;i++)
	// {
	// 	for (int j = 0; j <cols ;j++)
	// 	{
	// 		cin>>arr[i][j];
	// 	}
	// }


	// print
	// for (int i = 0; i <rows;i++)
	// {
	// 	for (int j = 0; j <cols ;j++)
	// 	{
	// 		cout<<arr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// cout<<endl;


	// int rows,cols;
	// cin>>rows>>cols;//3 4
	// int**aptr=new int*[rows];

	// for(int i=0;i<rows;i++){
	// 	aptr[i]=new int[cols];
	// }


		// input
	// for (int i = 0; i <rows;i++)
	// {
	// 	for (int j = 0; j <cols ;j++)
	// 	{
	// 		cin>>aptr[i][j];
	// 	}
	// }

	// o/p

	// for (int i = 0; i <rows;i++)
	// {
	// 	for (int j = 0; j <cols ;j++)
	// 	{
	// 		cout<<aptr[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// cout<<endl;



	// aptr[0]=new int[cols];

	// aptr[1]=new int[cols];

	// aptr[2]=new int[cols];





	// for(int i=0;i<rows;i++){
	// 	delete[] aptr[i];
	// 	aptr[i]=NULL;
	// }

	// delete[]aptr;

	// aptr=NULL;

	int rows,cols;
	cin>>rows>>cols;//3 4
	char**aptr=new char*[rows];

	for(int i=0;i<rows;i++){
		aptr[i]=new char[cols];
	}


	for (int i = 0; i <rows; ++i)
	{
		cin>>aptr[i];
	}

	for (int i = 0; i <rows; ++i)
	{
		cout<<aptr[i]<<endl;
	}
















	return 0;
}