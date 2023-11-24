#include<bits/stdc++.h>
using namespace std;

int ok=0; set<int> st;

struct node{
	int v;
	node *l, *r;
	node(int x){
		v=x;
		l=NULL; r=NULL;
	}
};

node* find(node* &head, int x){
	if(head==NULL) return NULL;
	if(head->v==x) return head;
	node* p=find(head->l, x);
	if(p!=NULL) return p;
	else return find(head->r, x);
}

void check(node* head){
	if(head==NULL) return;
	int child=0;
	if(head->l!=NULL) ++child;
	if(head->r!=NULL) ++child;
	if(child==1){
		ok=0;
	 	return;
	}else{
		check(head->l);
		check(head->r);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		node* p=NULL;
		int par, child; char pos;
		for(int i=1; i<=n; i++){
			cin >> par >> child >> pos;
			if(p==NULL) p=new node(par);
			node* q=find(p, par);
			if(pos=='L') q->l=new node(child);
			else q->r=new node(child);
		}
		
		ok=1; 
		check(p);
		cout << ok << "\n";	
	}
	return 0;
}
