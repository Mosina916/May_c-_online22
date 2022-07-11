#include<iostream>
using namespace std;
// void updatearr(int arr[],int n){

void updatearr(int *arr,int n){
	for (int i = 0; i <n; ++i)
	{
		// arr[i]=arr[i]+10;
		*(arr+i)=*(arr+i)+10;
	}

	// print arr 
	for (int i = 0; i <n; ++i)
	{
		// cout<<arr[i]<<" ";//13 14 12 15 11
		cout<<*(arr+i)<<" ";
	}

}
int main(){
	int arr[]={3,4,2,5,1};
	int n=sizeof(arr)/sizeof(int);

	updatearr(arr,n);

	// print arr 
	for (int i = 0; i <n; ++i)
	{
		// cout<<arr[i]<<" ";//13 14 12 15 11
		cout<<*(arr+i)<<" ";
	}
	// // print array
	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// arr[i] is same as *(arr+i)

	// print array
	// for(int i=0;i<n;i++){
	// 	cout<<*(arr+i)<<" ";
	// }
	// cout<<endl;




	// cout<<arr<<endl;//0x7ffeedcdb910
	// cout<<arr<<" "<<&arr[0]<<endl;
	// cout<<arr+1<<" "<<&arr[1]<<endl;
	// cout<<arr+2<<" "<<&arr[2]<<endl;
	// cout<<arr+3<<" "<<&arr[3]<<endl;




	







	

	return 0;
}