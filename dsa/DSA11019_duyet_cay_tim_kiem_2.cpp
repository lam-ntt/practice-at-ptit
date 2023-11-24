#include<bits/stdc++.h>
using namespace std;

struct node{
	int v; 
	node *l, *r;
	node(int x){
		v=x;
		l=NULL, r=NULL;
	}
};

void insert(node* &head, int x){
	if(head==NULL) head=new node(x);
	else if(x<head->v) insert(head->l, x);
	else insert(head->r, x);
}

void postOrder(node* head){
	if(head==NULL) return;
	postOrder(head->l);
	postOrder(head->r);
	cout << head->v << " ";
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int tmp; cin >> tmp;
		node* p=new node(tmp);
		for(int i=2; i<=n; i++){
			cin >> tmp;
			insert(p, tmp);
		}
		postOrder(p);
		cout << "\n";
	}
	return 0;
}
