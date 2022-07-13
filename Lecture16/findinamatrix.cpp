#include<iostream>
using namespace std;
bool findinmatrix(int arr[100][100],int rows,int cols,int key){

	for(int i=0;i<=rows;i++){
		for (int j=0;j<=cols-1;j++)
		{
			if(arr[i][j]==key){
				cout<<key<<" is present at index "<<i<<" , "<<j<<endl;
				return true;

			}
		}
	}
	return false;

}
int main(){
	int arr[100][100];
	int rows,cols;//4 3
	cin>>rows>>cols;

	// input 

	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];
	}

	}

	int key;
	cin>>key;

	
	if(findinmatrix(arr,rows,cols,key)){
		cout<<"yes key is present"<<endl;

	}
	else{
		cout<<"No key is present"<<endl;

	}




	return 0;
}