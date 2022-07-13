#include<iostream>
using namespace std;
int main(){
	// int arr[]={1,2,4,3,5,6};


	// 2d int array
	// declare
	// datatype arrayname[noof rows][no of cols];
	// int arr[4][3]={
	// 	{3,4,6},
	// 	{9,12,17},
	// 	{14,15,20},
	// 	{30,60,40}

	// };

	// you can ignore no of rows when you are initilizing the array when created
	
	// int arr[][3]={
	// 	{3,4,6},
	// 	{9,12,17},
	// 	{14,15,20},
	// 	{30,60,40}

	// };
	// arr[rowno][colno]



	// print 2d array

	// for(int i=0;i<=3;i++){
	// 		for(int j=0;j<=2;j++){
	// 		cout<<arr[i][j]<<" ";

	// }
	// cout<<endl;

	// }







//rowno 0 

	// cout<<arr[0][0]<<" ";//3 4 6
	// cout<<arr[0][1]<<" ";
	// cout<<arr[0][2]<<endl;
	// for(int j=0;j<=2;j++){
	// 		cout<<arr[0][j]<<" ";

	// }
	// cout<<endl;


	//rowno 1 
	// cout<<arr[1][0]<<" ";//9 12 13
	// cout<<arr[1][1]<<" ";
	// cout<<arr[1][2]<<endl;

	// for(int j=0;j<=2;j++){
	// 		cout<<arr[1][j]<<" ";

	// }
	// cout<<endl;


		//rowno 2
	// cout<<arr[2][0]<<" ";//9 12 13
	// cout<<arr[2][1]<<" ";
	// cout<<arr[2][2]<<endl;

	// for(int j=0;j<=2;j++){
	// 		cout<<arr[2][j]<<" ";

	// }
	// cout<<endl;

	//rowno 3
	// cout<<arr[3][0]<<" ";//9 12 13
	// cout<<arr[3][1]<<" ";
	// cout<<arr[3][2]<<endl;

	// for(int j=0;j<=2;j++){
	// 		cout<<arr[3][j]<<" ";

	// }
	// cout<<endl;


	// user defined array
	int arr[100][100];
	int rows,cols;

	cin>>rows>>cols;//4 3
	// int arr[rows][cols];


	// cin>>arr[0][0];
	// cin>>arr[0][1];
	// cin>>arr[0][2];

	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];
	}

	}


// print 2d array
	for(int i=0;i<=rows-1;i++){
			for(int j=0;j<=cols-1;j++){
			cout<<arr[i][j]<<" ";

	}
	cout<<endl;

	}
	

	// for(int j=0;j<=2;j++){
	// 	cin>>arr[0][j];
	// }


	// for(int j=0;j<=2;j++){
	// 	cin>>arr[1][j];
	// }
	// for(int j=0;j<=2;j++){
	// 	cin>>arr[2][j];
	// }

	// for(int j=0;j<=2;j++){
	// 	cin>>arr[3][j];
	// }













	return 0;
}