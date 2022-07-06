#include<iostream>
#include <climits>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[1000000];
	for (i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	int q;

	int tm,k;

	cin>>q;
	int c=1;
	while(c<=q){
		cin>>tm>>k;//200 3
		int cou=0;
		for (i = 0; i <n; ++i)
		{
			if(tm%arr[i]==0){
				cou++;
				if(cou==k){
					break;
				}

			}
		}
		if(cou==k){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}





		c++;
	}



	return 0;
}