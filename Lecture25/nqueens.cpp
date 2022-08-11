#include<iostream>
using namespace std;
int c=0;
bool kyamaiqueendaalsaktihun(int board[50][50],int i,int j,int n){
	// i 3 j=0;
	// vertical check
	for(int l=0;l<i;l++){
		if(board[l][j]==1){
		return false;
	}

	}

	// horizontal check
	// for(int k=0;k<j;k++){
	// 	if(board[i][k]==1){
	// 	return false;

	// }

	// }

	// diagonal right
	// i-->2 j-->2
	int u=i;//2
	int v=j;//2


	i--;//1
	j++;//3

	while(i>=0 and j<n){
		if(board[i][j]==1){
		return false;
	}
	i--;//0
	j++;//4

	}

	// i-->-1 j==5


	// left diagonal
	u--;//1
	v--;//1

while(u>=0 and v>=0){

	if(board[u][v]==1){
		return false;
	}
	u--;//0
	v--;//0




}

return true;

}
bool nqueen(int board[50][50],int n,int i){
	// base case
	if(i==n){
		c++;
		for(int p=0;p<n;p++){
			for(int a=0;a<n;a++){
				if(board[p][a]==1){
					cout<<"Q";

				}
				else{
					cout<<"_";
				}
				
			}
			cout<<endl;
		}

		cout<<endl;
		// return true;

		return false;
	}


	// recursive case
	for(int j=0;j<n;j++){
		if(kyamaiqueendaalsaktihun(board,i,j,n)==true){
		board[i][j]=1;
		bool bakikaansmila=nqueen(board,n,i+1);
		if(bakikaansmila==true){
			return true;
		}
		board[i][j]=0;
	}

	}
	// return true
	return false;
	


}
int main(){
	int board[50][50]={0};
	int n;
	cin>>n;

	nqueen(board,n,0);
	cout<<c<<endl;


	return 0;
}