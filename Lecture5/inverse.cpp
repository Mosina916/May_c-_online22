// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
// 	int no;//43152
// 	cin>>no;
// 	int ans=0;


// 	int pos=1;
// 	// loop
// 	while(no>0){
// 		int ld=no%10;//4

// 	ans=ans+pos*pow(10,ld-1);//0+1*10-->10+2*10000-->20010
// 	no=no/10;//43152/10-->4315/10-->4/10-->0
// 	pos=pos+1;//6

// 	}

// 	cout<<ans<<endl;


	
	
// 	return 0;
// }


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a;
    int num = 0;
    int count = 1;
    while(n>0){
    a = n%10;
     num = num + count*(pow(10,(a-1)));
       n=n/10; 
       count++;
    }
    cout<<num<<endl;  
    return 0;
}

	





	
	
	return 0;
}