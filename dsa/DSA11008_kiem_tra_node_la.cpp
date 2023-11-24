#include<bits/stdc++.h>
using namespace std;

set<int> st;

struct node{
	int v, d;
	node *l, *r;
	node(int x){
		v=x, d=0;
		l=NULL, r=NULL;
	}
};

node* find(node* &head, int x){
	if(head==NULL) return NULL;
	if(head->v==x) return head;
	node* p=find(head->l, x);
	if(p!=NULL) return p;
	else return find(head->r, x);
}

void check(node* head, int height){
	if(head==NULL) return;
	head->d=height+1;
	if(head->l!=NULL) check(head->l, height+1);
	if(head->r!=NULL) check(head->r, height+1);
	if(head->l==NULL&&head->r==NULL) st.insert(head->d);
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
		st.clear();
		check(p, 0);
		cout << (st.size()==1) << "\n";
	}
	return 0;
}
