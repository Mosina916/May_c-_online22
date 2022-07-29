#include<iostream>
using namespace std;
void mergetwosortedarrays(int arr1[],int arr2[],int n1,int n2){
	int temp[10000];
	int i=0,j=0,k=0;
// loop
	while(j<=n2-1 and i<=n1-1){
		if(arr1[i]<arr2[j]){ //2<0 2<1 2<3 4<3
		temp[k]=arr1[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr2[j];
		j++;
		k++;
	}

	}
	// j-->n2 arr1 wali array is remaining

// loop
	while(i<=n1-1){
			temp[k]=arr1[i];
			k++;
			i++;

	}
	// i-->n1-->arr2 is remaining
	// loop
	while(j<=n2-1){
		temp[k]=arr2[j];
	k++;
	j++;

	}

	for(int l=0;l<k;l++){
		cout<<temp[l]<<" ";
	}
	cout<<endl;
}




int main(){
	// int arr1[]={2,4,6,8};
	// int arr2[]={0,1,3};
	// int n1=sizeof(arr1)/sizeof(int);
	// int n2=sizeof(arr2)/sizeof(int);

	// mergetwosortedarrays(arr1,arr2,n1,n2);

	


	


	return 0;
}