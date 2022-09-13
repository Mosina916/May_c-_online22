#include<iostream>
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

int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}




	// recursive case
	// op1 is diamter lies in lst;
	int op1=diameter(root->left);//3
	// op2  is diametrr lies in rst
	int op2=diameter(root->right);//2

	// op3 is diamter passing through root
	int op3=height(root->left)+height(root->right);
	// return max(op1,max(op2,op3));
	return max(op1,max(op2,op3));
}
int main(){
	node*root=buildtree();
	cout<<"count of nodes is : "<<countnodes(root)<<endl;

	cout<<"height of tree is : "<<height(root)<<endl;
	cout<<"diameter of tree is : "<<diameter(root)<<endl;

	// cout<<"preorder print"<<endl;
	// preorder(root);
	// cout<<endl;

	// cout<<"inorder print"<<endl;
	// inorder(root);
	// cout<<endl;

	// cout<<"postder print"<<endl;
	// postorder(root);
	// cout<<endl;

	return 0;
}