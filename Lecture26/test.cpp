#include<iostream>
using namespace std;
bool kyawonumberdalsaktehai(int mat[9][9],int num,int i,int j,int n){
	// row num tou nahi hai 
	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;

		}
	}
	// col mai wo num tou nahi hai
	for(int l=0;l<n;l++){
		if(mat[l][j]==num){
			return false;
		}
	}
	// root(n)*root(n) mai wo num tou nahi hai

	int p=sqrt(n);//3
	int si=(i/p)*p;//3
	int sj=(j/p)*p;//6

	for(int a=si;a<si+p;a++){//4
	for(int b=sj;b<sj+p;b++){//8
	if(mat[a][b]==num){
		return false;
	}
}
}
return true;

}
bool sudukosolver(int mat[9][9],int i,int j,int n){
	// base case
	if(i==n){
		for(int k=0;k<n;k++){
			for(int l=0;l<n;l++){
				cout<<mat[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;
		return false;
	}
	// recursive case
	if(j==n){
		return sudukosolver(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
	// else{
		return sudukosolver(mat,i,j+1,n);
	}

	for(int num=1;num<=9;num++){//10
	if(kyawonumberdalsaktehai(mat,num,i,j,n)==true){
		mat[i][j]=num;
		bool kyaaageansmila=sudukosolver(mat,i,j+1,n);//false
		if(kyaaageansmila==true){
			return true;

		}
		mat[i][j]=0;

	}
}
return false;
}
int main(){
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		sudukosolver(mat,0,0,9);


	return 0;
}