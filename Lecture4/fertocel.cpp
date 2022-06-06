#include <iostream>
using namespace std;
int main(){
	// int init=0,final=300,step=20;
	int init,final,step;
	cin>>init>>final>>step;

	int fer=init;//0
// loop
	while(fer<=final){//320<=300
		// int cel=5/9*(fer-32);
		// int cel=(fer-32)*5/9;
		// int cel=5.0/9*(fer-32);
		int cel=5/9.0*(fer-32); //explicit tc

			// int cel=5.0/9.0*(fer-32);
		// int cel=5.0/9.0*(fer-32);
		cout<<fer<<'\t'<<cel<<endl; //0      -17
		fer=fer+step;//300

	}
	
	return 0;
}