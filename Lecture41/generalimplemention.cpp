// implemetation therough adjacency list
#include<iostream>
#include <unordered_map>
#include <list>
using namespace std;
template<typename T>
class Graph{
	unordered_map<T,list<T> > h;

public:
	//
	// void addedge(T x,T y,bool birdir=true){
	void addedge(T x,T y,bool birdir=false){
		h[x].push_back(y);
		if(birdir){
			h[y].push_back(x);
		}


	} 

	void printgraph(){
		for(auto p:h){//p key-->value

			cout<<p.first<<"--> ";//putin

			// string nei:p.second
			for(auto nei:p.second){
				cout<<nei<<" ";

			}

			cout<<endl;

		}


	}



	


};
int main(){
	Graph<string>g;
	g.addedge("putin","trump");
	g.addedge("putin","modi");
	g.addedge("putin","pope");
	g.addedge("trump","modi",true);
	g.addedge("pope","");
	g.addedge("prabhu","modi");
	g.addedge("yogi","prabhu");
	g.addedge("yogi","modi",true);
	// Graph<int>g;
	// g.addedge(0,1);
	// g.addedge(0,4);
	// g.addedge(1,4);
	// g.addedge(1,3);
	// g.addedge(1,2);
	// g.addedge(4,2);
	// g.addedge(3,2);

	g.printgraph();

	// g.printgraph();


	





	return 0;
}