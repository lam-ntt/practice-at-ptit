#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	node* left;
	node* right;
	node(int x){
		value=x;
		left=NULL;
		right=NULL;
	}
};

// Cac thao tac co ban tren cay nhi phan 
// 1. Tao node cho cay
// 2. Tao node goc cho cay
// 3. Them vao node la ben trai node cho truoc
// 4. Them vao node la ben phai node cho truoc
// 5. Loai bo node la ben trai node cho truoc
// 6. Loai bo node la ben phai node cho truoc
// 7. Loai bo ca cay
// 8. duyet cay theo thu tu truoc
// 9. Duyet cay theo thu tu giua
//10. Duyet cay theo thu tu sau

void makeRoot(node* &head, int x){
	if(head!=NULL) return;
	else head=new node(x);
}

void insertLeft(node* &head, int parent, int x){
	if(head==NULL) return;
	if(head->value==parent){
		if(head->left==NULL) head->left=new node(x);
	}else{
		insertLeft(head->left, parent, x);
		insertLeft(head->right, parent, x);
	}
}

void insertRight(node* &head, int parent, int x){
	if(head==NULL) return;
	if(head->value==parent){
		if(head->right==NULL) head->right=new node(x);
	}else{
		insertRight(head->left, parent, x);
		insertRight(head->right, parent, x);
	}
}

void removeLeft(node* &head, int parent){
	if(head==NULL) return;
	if(head->value==parent){
		if(head->left==NULL) return;
		if(head->left->left!=NULL||head->left->right!=NULL) return;
		node* p=head->left;
		head->left=NULL;
		delete(p);
	}else{
		removeLeft(head->left, parent);
		removeLeft(head->right, parent);
	}
}

void removeRight(node* &head, int parent){
	if(head==NULL) return;
	if(head->value==parent){
		if(head->right==NULL) return;
		if(head->right->left!=NULL||head->right->right!=NULL) return;
		node* p=head->right;
		head->right=NULL;
		delete(p);
	}else{
		removeRight(head->left, parent);
		removeRight(head->right, parent);
	}
}

void clearTree(node* &head){
	if(head==NULL) return;
	clearTree(head->left);
	clearTree(head->right);
	delete(head);
}

void inorder(node* head){
	if(head==NULL) return;
	cout << head->value << " ";
	inorder(head->left);
	inorder(head->right);
}

void preorder(node* head){
	if(head==NULL) return;
	preorder(head->left);
	cout << head->value << " ";
	preorder(head->right);
}

void postorder(node* head){
	if(head==NULL) return;
	postorder(head->right);
	postorder(head->left);
	cout << head->value << " ";
}

int main(){
	node* p=NULL;
	makeRoot(p, 1);
	insertLeft(p, 1, 2);
	insertRight(p, 1, 3);
	insertLeft(p, 2, 4);
	insertRight(p, 3, 5);
	
	inorder(p); 
	cout << "\n";
	preorder(p);
	cout << "\n";
	postorder(p);
	cout << "\n";
	
	removeLeft(p, 2);
	removeRight(p, 3);
	
	inorder(p); 
	cout << "\n";
	preorder(p);
	cout << "\n";
	postorder(p);
	cout << "\n";
	return 0;
}
