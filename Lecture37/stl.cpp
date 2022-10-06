#include<iostream>
#include <unordered_map>
// #include <map>
using namespace std;
// 3
// 0 1 2 3 4 5
// A B C D E
// A-->6
// AAbA 
// ordered map-->key according sorted o(logn)
// unordered map-->key according sorted nahi hota o(1)

// arr[3]=9;
int main(){
	unordered_map<string,int> h;

	// map<string,int> h;

	h["Apple"]=1300;

	// h.insert("Apple",1300);
	h.insert(make_pair("uiwi",2490));
	h.insert(make_pair("ki",490));
	h.insert(make_pair("oi",24950));


	// for each loop
	for(auto x:h){
		cout<<x.first<<" "<<x.second<<" , ";


	}

	// unordered_map<string,pair<int,int> > h;

	// h.insert(make_pair("abc",make_pair(3645,2534)));


	// for(auto x:h){
	// 	cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<endl;

	// }


	// h.insert("kiw",2190);
	// h.insert("uwi",920);
	// h.insert("tyuwi",290);
	// h.insert("kdwi",9430);
	// h.insert("kwti",9340);

	// h.insert("iw",2190);
	// h.insert("ui",920);

	// if(h.search("kiwi")){
	// 	cout<<"present"<<endl;
	// }
	// else{
	// 	cout<<"not present"<<endl;
	// }




	// h.printhm();




	return 0;
}