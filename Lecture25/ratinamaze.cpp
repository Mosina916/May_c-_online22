#include<iostream>
using namespace std;
int sol[50][50]={0};
bool ratinamaze(char maze[50][50],int r,int c,int i,int j){
	// base case
	if(i==r-1 and j==c-1){
		sol[i][j]=1;
		for(int a=0;a<r;a++){
			for(int k=0;k<c;k++){
				cout<<sol[a][k]<<" ";
			}

			cout<<endl;
		}
		cout<<endl;

		// return true;

		sol[i][j]=0;

		// multiple sol
		return false;
	}


	// recursive case
	sol[i][j]=1;

	// forward
	if(j<=c-2 and maze[i][j+1]!='X'){
		// aage jaa sakti hun
		bool kyaaageseansmila=ratinamaze(maze,r,c,i,j+1);//true false
		if(kyaaageseansmila==true){
			return true;

		}


	}
	// dowward
	if(i<=r-2 and maze[i+1][j]!='X'){
		// tou mai neeche jaa sakti hun
		bool kyaneecheseansmila=ratinamaze(maze,r,c,i+1,j);
		if(kyaneecheseansmila==true){
			return true;
		}

	}
	sol[i][j]=0;
	return false;


}
int main(){
	char maze[50][50]={
		"OOOO",
		"OXOO",
		"OOXX",
		"OOOO"

	};
	int r=4,c=4;
	

	ratinamaze(maze,r,c,0,0);



	return 0;
}