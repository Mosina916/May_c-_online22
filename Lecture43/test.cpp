// implemetation therough adjacency list
#include<iostream>
#include <unordered_map>
#include <queue>
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

	// void bfs(T start){
	// 	queue<T> q;
	// 	q.push(start);
	// 	unordered_map<T,bool> visited;
	// 	visited[start]=true;

	// 	while(!q.empty()){
	// 		T data=q.front();//4
	// 	q.pop();
	// 	cout<<data<<" ";
	// 	for(auto neigh:h[data]){
	// 		if(visited[neigh]!=true){
	// 			q.push(neigh);
	// 			visited[neigh]=true;
	// 		}

	// 	}

	// 	}
		


	// }

	// void bfsdistance(T start){
	// 	queue<T> q;
	// 	q.push(start);
	// 	unordered_map<T,bool> visited;
	// 	visited[start]=true;
	// 	unordered_map<T,int> distance;
	// 	distance[start]=0;

	// 	while(!q.empty()){
	// 		T data=q.front();//0
	// 	q.pop();
	// 	// cout<<data<<" ";
	// 	for(auto neigh:h[data]){
	// 		if(visited[neigh]!=true){//1
	// 			q.push(neigh);
	// 			visited[neigh]=true;
	// 			distance[neigh]=distance[data]+1;
	// 		}

	// 	}

	// 	}


	// 	for(auto x:distance){
	// 		cout<<"distance of "<<start<<" to "<<x.first<<" will be "<<x.second<<endl;
	// 	}
		


	// }

// 

	int pathfind(T start,T end){
		queue<T> q;
		q.push(start);
		unordered_map<T,bool> visited;
		visited[start]=true;
		unordered_map<T,int> distance;
		distance[start]=0;

		unordered_map<T,T> parent;
		parent[start]=start;




		while(!q.empty()){
			T data=q.front();//0
		q.pop();
		// cout<<data<<" ";
		for(auto neigh:h[data]){
			if(visited[neigh]!=true){//1
				q.push(neigh);
				visited[neigh]=true;
				distance[neigh]=distance[data]+1;
				parent[neigh]=data;
			}

		}

		}


		// for(auto x:distance){
		// 	cout<<"distance of "<<start<<" to "<<x.first<<" will be "<<x.second<<endl;
		// }

		T temp=end;//1
		while(temp!=start){
			cout<<temp<<"<--";//1<--0<--
		temp=parent[temp];//4

		}


		cout<<temp<<endl;//1<--0<--4


		return distance[end];
		
		


	}




	


};
int main(){
	// Graph<string>g;
	// g.addedge("putin","trump");
	// g.addedge("putin","modi");
	// g.addedge("putin","pope");
	// g.addedge("trump","modi",true);
	// g.addedge("pope","");
	// g.addedge("prabhu","modi");
	// g.addedge("yogi","prabhu");
	// g.addedge("yogi","modi",true);
	// Graph<int>g;
	// g.addedge(0,1);
	// g.addedge(0,3);
	// g.addedge(0,2);
	// g.addedge(0,4);
	// g.addedge(3,4);

	// g.addedge(2,3);
	// g.addedge(1,2);

	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;


	for(int u=0;u<36;u++){
		for(int dice=1;dice<=6;dice++){
			int v=u+dice+board[u+dice];//0+2+13-->15
			g.addedge(u,v);
		}
	}

	cout<<g.pathfind(0,36)<<endl;


	

	// g.printgraph();
	// g.bfs(4);

	// g.bfsdistance(4);

	// cout<<g.pathfind(4,1)<<endl;

	// g.printgraph();


	





	return 0;
}