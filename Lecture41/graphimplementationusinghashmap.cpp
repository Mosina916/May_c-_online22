// implemetation therough adjacency list
#include<iostream>
#include <unordered_map>
#include <list>
using namespace std;
class Graph{
	unordered_map<string,list<string> > h;

public:
	//
	void addedge(string x,string y,bool birdir=false){
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
	Graph g;
	g.addedge("putin","trump");
	g.addedge("putin","modi");
	g.addedge("putin","pope");
	g.addedge("trump","modi",true);
	g.addedge("pope","");
	g.addedge("prabhu","modi");
	g.addedge("yogi","prabhu");
	g.addedge("yogi","modi",true);

	g.printgraph();


	





	return 0;
}