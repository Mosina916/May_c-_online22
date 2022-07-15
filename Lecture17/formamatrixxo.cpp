#include<iostream>
using namespace std;
void formamatrixxo(char arr[100][100],int trows,int tcols){
	int sr=0,sc=0,ec=tcols-1,er=trows-1;
	char ch='X';


// work for every square matrix
// loop
	while(sc<=ec && sr<=er){

		// ist row print
	for(int j=sc;j<=ec;j++){
		arr[sr][j]=ch;

	}
	sr++;
	// last col

	for(int i=sr;i<=er;i++){//i-->3
		arr[i][ec]=ch;
	}
	ec--;
	// last row
	
		for(int k=ec;k>=sc;k--){
		arr[er][k]=ch;

	}
	er--;

	
	

	// ist col
	

	for(int l=er;l>=sr;l--){//3
		arr[l][sc]=ch;

	}
	sc++;

	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';

	}


	}


	

	
	
	

}
int main(){
	

	char arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//6 6
	

	// spriarlprint(arr,4,4);
	formamatrixxo(arr,rows,cols);


	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}