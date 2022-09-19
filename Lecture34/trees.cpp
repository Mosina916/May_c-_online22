#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;

	}
};


node* buildtree(){
	int da;
	cin>>da;//8 10 1 -1 -1 6 4 -1 -1 7 -1  -1 3 -1 14 13 -1 -1 -1
	if(da==-1){
		return NULL;
	}
	else{
		node*root=new node(da);
		root->left=buildtree(); // lst
		root->right=buildtree(); // rst

		return root;

	}


}

void printlevelwise(node*root){
	if(root==NULL){
		return;
	}
	
	queue<node*> q;
	// step 1 push root and then NULL
	q.push(root);//
	q.push(NULL);

// loop
	while(!q.empty()){
		node*x=q.front();//NULL
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}

	}
	else{
		cout<<x->data<<" ";//8

		// if left child is not null push in queue
		if(x->left!=NULL){
			q.push(x->left);
		}
		// if right child is not null push in queue
		if(x->right!=NULL){
			q.push(x->right);
		}

	}


	}


	

}

void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	cout<<root->data<<" ";//root
	preorder(root->left);//lst
	preorder(root->right);//rst
}

void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	
	inorder(root->left);//lst
	cout<<root->data<<" ";//root
	inorder(root->right);//rst
}

void postorder(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// recursive case
	
	postorder(root->left);//lst
	postorder(root->right);//rst
	cout<<root->data<<" ";//root
	
}

int countnodes(node*root){

	// base case
	if(root==NULL){
		return 0;
	}


	// rec case

	return countnodes(root->left)+countnodes(root->right)+1;

}
int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case

	return max(height(root->left),height(root->right))+1;
}

class Pair{
public:
	int hei;
	int dia;
	Pair(){
		hei=0;
		dia=0;

	}
};

Pair diameterinon(node*root){
	Pair p;

	// base case
	if(root==NULL){
		// p.dia=0;
		// p.hei=0;
		return p;
	}

	// recursive case
	Pair l=diameterinon(root->left);
	Pair r=diameterinon(root->right);
	p.hei=max(l.hei,r.hei)+1;
	// p ki dia nikalne k lye
	int op1=l.hei+r.hei;//2
	int op2=l.dia;//0
	int op3=r.dia;//0
	p.dia=max(op1,max(op2,op3));//2

	return p;


}


int sumofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}



	// rec case
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;
}

int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// recursive case
	// op3 is diamter passing through root
	int op3=height(root->left)+height(root->right);//6
	// op1 is diamter lies in lst;
	int op1=diameter(root->left);//3
	// op2  is diametrr lies in rst
	int op2=diameter(root->right);//2

	
	// return max(op1,max(op2,op3));
	return max(op1,max(op2,op3));
}
bool searchinbt(node*root,int key){
	// base case 
	if(root==NULL){
		return false;

	}


	// rec case

	if(root->data==key){
		return true;
	}

	return searchinbt(root->left,key)||searchinbt(root->right,key);

}


void mirror(node*root){
	// base case 
	if(root==NULL){
		return;
	}

	// /rec case
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}


int main(){
	node*root=buildtree();

	// preorder(root);
	// cout<<endl;
	// mirror(root);
	// preorder(root);

	// cout<<endl;

	printlevelwise(root);
	
	// Pair x=diameterinon(root);

	// cout<<"diameter is "<<x.dia<<endl;
	// cout<<"height is "<<x.hei<<endl;

	// cout<<sumofnodes(root)<<endl;
	// int key;
	// cin>>key;

	// if(searchinbt(root,key)){
	// 	cout<<"yes present"<<endl;
	// }
	// else{
	// 	cout<<"Not present"<<endl;

	// }

	

	return 0;
}