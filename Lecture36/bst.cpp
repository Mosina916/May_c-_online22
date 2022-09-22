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




// // nodes between k1 and k2 in sorted order
// void rangebwk1andk2(node*root,int k1,int k2){

// 	// base case
// 	if(root==NULL){
// 		return;
// 	}

// 	// recu case
// 	rangebwk1andk2(root->left,k1,k2);//4 6 7
// 	if(root->data>=k1 and root->data<=k2){
// 		cout<<root->data<<" ";
// 	}
// 	rangebwk1andk2(root->right,k1,k2);

// }


// nodes between k1 and k2 in sorted order
void rangebwk1andk2(node*root,int k1,int k2){

	// base case
	if(root==NULL){
		return;
	}

	// recu case
	rangebwk1andk2(root->right,k1,k2);
	
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	rangebwk1andk2(root->left,k1,k2);//4 6 7
	

}

class linkedll{
public:
	node*head;
	node*tail;
	linkedll(){
		head=NULL;
		tail=NULL;

	}
};

linkedll bsttosortedll(node*root){
	linkedll l;
	// base case
	if(root==NULL){
		return l;

	}


	// rec case
	// case 1 no lst no rst
	if(root->left==NULL and root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;
	}

	// case 2 only lst exist
	else if(root->left!=NULL and root->right==NULL){
		linkedll le=bsttosortedll(root->left);
		le.tail->right=root;

		// le.tail->left
		l.head=le.head;
		l.tail=root;
		// return l;


	}
	// case 3 only rst exist
	else if(root->left==NULL and root->right!=NULL){
		linkedll ri=bsttosortedll(root->right);
		root->right=ri.head;
		l.head=root;
		l.tail=ri.tail;
		// return l;

	}


	// case 4 both lst and rst exist
	else{
		linkedll le=bsttosortedll(root->left);
		linkedll ri=bsttosortedll(root->right);
		le.tail->right=root;
		root->right=ri.head;
		l.head=le.head;
		l.tail=ri.tail;
		// return l;
	}

	return l;


}

void printll(node*head){

	while(head!=NULL){
		cout<<head->data<<" ";
	head=head->right;


	}

	cout<<endl;
	

}

bool isbstornot(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}


	// rec case
	if((root->data>=min and root->data<=max) and isbstornot(root->left,min,root->data) and isbstornot(root->right,root->data+1,max)){
		return true;
	}
	return false;

}


// bool f(node*root){


	// int max=calculatemax(root->left);//7
	// int min=calculatemin(root->right);//10
// 	if(root->data>=max and root->data<min and f(root->left) and f(root->right)){
// 		return true;

// 	}
// 	return false

// }

class Pair{
public:

	int hei;
	bool isbal;
	Pair(){
		hei=0;
		isbal=true;
	}

};

Pair isheightbalancedornot(node*root){
	Pair p;
	// base case 
	if(root==NULL){
		return p;
	}



	//rec case
	Pair lst=isheightbalancedornot(root->left);
	Pair rst=isheightbalancedornot(root->right);

	p.hei=max(lst.hei,rst.hei)+1;

	if(lst.isbal==true and rst.isbal==true and abs(lst.hei-rst.hei)<=1){
		p.isbal=true;
	}
	p.isbal=false;

	return p;

}

int arr[]={2,3,6,9,13,14,16,19};

node* buildbstusingsortedarr(int s,int e){
	// base case
	if(s>e){
		return NULL;
	}



	// rec case
	int mid=(s+e)/2;//3
	node*root=new node(arr[mid]);
	root->left=buildbstusingsortedarr(s,mid-1);
	root->right=buildbstusingsortedarr(mid+1,e);

	return root;
}






int main(){

	// node*root=buildtree();
	int n=sizeof(arr)/sizeof(int);
	node*root=buildbstusingsortedarr(0,n-1);

	// node*root=buildbst();
	printlevelwise(root);
	// Pair x=isheightbalancedornot(root);
	// cout<<x.hei<<endl;
	// if(x.isbal==true){
	// 	cout<<"Balanced"<<endl;
	// }
	// else{
	// 	cout<<"not Balanced"<<endl;
	// }
	// if(isbstornot(root)){
	// 	cout<<"bst"<<endl;
	// }
	// else{
	// 	cout<<"not bst"<<endl;
	// }
	// int k1,k2;
	// cin>>k1>>k2;

	// rangebwk1andk2(root,k1,k2);

	// linkedll x=bsttosortedll(root);

	// printll(x.head);




	
	return 0;
}