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



void printlevelwise(node*root){
	if(root==NULL){
		return;
	}

	// queue<node*> q;
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
	cout<<root->data<<",";//root
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
	cout<<root->data<<",";//root
	
	inorder(root->right);//rst
}


int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case

	return max(height(root->left),height(root->right))+1;
}


node* buildtreelevelwise(){
	int data;
	cout<<"Enter the data of root node"<<endl;
	cin>>data;//8
	if(data==-1){
		return NULL;
	}
	// else{
		node*root=new node(data);
		queue<node*>q;
		q.push(root);


// loop
		while(!q.empty()){
			node*x=q.front();//930
		q.pop();

		cout<<"Enter the left and right child of "<<x->data<<endl;

		int lc,rc;
		cin>>lc>>rc;//3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1  -1 -1 -1 -1 

		if(lc!=-1){
			x->left=new node(lc);
			q.push(x->left);

		}
		if(rc!=-1){
			x->right=new node(rc);
			q.push(x->right);
		}

		}

		


		return root;
	// }


}

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

int preord[]={8,3,1,6,4,7,10,14,13};
int inord[]={1,3,4,6,7,8,10,13,14};
// int i=0;


node* buildtreeusingprensin(int s,int e,int &i){//1 0

	// base case
	if(s>e){
		return NULL;
	}



// rec case 
	int x=preord[i];//1
	

	node*root=new node(x);

	int k;

	for(k=s;k<=e;k++){
		if(inord[k]==x){
		break;

	}

	}
	// k-->5
	// i++;//3
	root->left=buildtreeusingprensin(s,k-1,++i);
	root->right=buildtreeusingprensin(k+1,e,i);//2  4

	return root;


}


// bst
node* insertinbst(node*root,int data){
	if(root==NULL){
		root=new node(data);

		return root;

	}
	else if(data<=root->data){
		root->left=insertinbst(root->left,data);
		return root;
	}
	else{
		root->right=insertinbst(root->right,data);
		return root;
	}


}


node* buildbst(){
	int data;
	node*root=NULL;
	cin>>data;//8
	while(data!=-1){
		root=insertinbst(root,data);//300 1
		cin>>data;

	}

	return root;


}


bool searchbst(node*root,int key){

	// base case
	if(root==NULL){
		return false;

	}

	// rec case
	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchbst(root->left,key);
	}
	else{
		return searchbst(root->right,key);
	}



}


int main(){

	// node*root=buildtree();

	node*root=buildbst();
	printlevelwise(root);


	int key;
	cin>>key;


	if(searchbst(root,key)){
		cout<<"present"<<endl;
	}
	else{
		cout<<"absent"<<endl;
	}

	// int n=sizeof(preord)/sizeof(int);//9

	// int p=0;
	// node*root=buildtreeusingprensin(0,n-1,p);

	
	
	// node*root=buildtreelevelwise();
	
	return 0;
}