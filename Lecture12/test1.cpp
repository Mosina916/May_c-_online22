#include <iostream>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
	

long long a;
cin>>a;
long long n[a];
for(int i=0;i<a;i++){
	cin>>n[i];
}
long long min=INT_MAX;
long long sum=0;
//long longcurr = n[o];
for(int i=0;i<a;i++){
	sum+=n[i];
	if(sum<min){
		min = sum;
	}
	if(sum>0){
		sum =0;
	}
}
long long temp=0;
for(long long i=0;i<a;i++){
	temp+=n[i];
	
}

long long max = INT_MIN ;
int flag =0;
for(int i=0;i<a;i++){
	if(n[i]>=0){
		flag=1;
	}
	else{
		flag=0;
		break;
	}
}

if((temp-min)==0){
	for(int i=0;i<a;i++){
	
		if(max<n[i]){
			max=n[i];
		}
	}
cout<<max<<endl;	
}
else if(flag==1){
	cout<<temp<<endl;
}
else{
	cout<<temp-min<<endl;
}
}

return 0;
}