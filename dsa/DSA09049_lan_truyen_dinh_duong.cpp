#include<bits/stdc++.h>
#define ll long long
using namespace std;

set<pair<ll, ll>> st;

struct node{
	int n;
	ll v, c;
	node *l, *r;
	node(int x){
		n=x; 
		v=0; 
		c=0;
		l=NULL;
		r=NULL;
	}
};

node* find(node* &head, int x){
	if(head==NULL) return NULL;
	if(head->n==x) return head;
	node* p=find(head->l, x);
	if(p!=NULL) return p;
	else return find(head->r, x);
}

void insert(node* &head, int x){
	if(head==NULL) return;
	if(head->l==NULL) head->l=new node(x);
	else head->r=new node(x);
}

ll count(node* &head){
	if(head!=NULL){
		head->v=1;
		if(head->l!=NULL){
			head->v+=count(head->l);
			head->c+=(head->l->c+1);
		}
		if(head->r!=NULL){
			head->v+=count(head->r);
			head->c+=(head->r->c+1);
		}
		head->v+=head->c;
		st.insert({head->n, head->v});
		return head->v;
	}	
}

int main(){
	int n; cin >> n;
	node* p=new node(1);
	int tmp;
	for(int i=2; i<=n; i++){
		cin >> tmp;
		node* q=find(p, tmp);
		insert(q, i);
	}
	count(p);
	for(auto it: st) cout << it.second << " ";
	return 0;
}
