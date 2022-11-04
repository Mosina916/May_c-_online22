// implemetation therough adjacency list
#include<iostream>
#include <list>
using namespace std;
class Graph{
	list<int>*arr;
	int n;
public:
	// constructor
	Graph(int noofnodes){
		arr=new list<int>[noofnodes];
		n=noofnodes;

	}
	void addedge(int x,int y,bool birdir=true){//0 1
		arr[x].push_back(y);
		if(birdir==true){
			arr[y].push_back(x);
		}

	}

	void printgraph(){
		for(int i=0;i<n;i++){
			cout<<i<<"--> ";
		// for each
		for(int nei:arr[i]){//0 4 3 1
			cout<<nei<<" ";//0 4 3 1 
		}

		cout<<endl;
		}

	}




};
int main(){
	Graph g(5);
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(4,2);
	g.addedge(3,2);

	g.printgraph();





	return 0;
}