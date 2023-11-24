#include<bits/stdc++.h>
using namespace std;

int cnt; vector<int> v[1005];

struct node{
	int v;
	node *l, *r;
	node(int x){
		v=x;
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

void spiralOrder(node* head){
	if(head==NULL) return;
	for(int i=0; i<=cnt; i++) v[i].clear();
	cnt=0;
	queue<node*> q;
	q.push(head);
	q.push(NULL);
	node* tmp=NULL;
	while(1){
		if(q.size()==1&&q.front()==NULL) break;
		tmp=q.front(); q.pop();
		if(tmp==NULL){
			q.push(tmp);
			++cnt;
			continue;
		}
		v[cnt].push_back(tmp->v);
		if(tmp->l!=NULL) q.push(tmp->l);
		if(tmp->r!=NULL) q.push(tmp->r);
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
		spiralOrder(p);
		for(int i=0; i<=cnt; i++){
			if(i%2) for(auto it: v[i]) cout << it << " ";
			else for(int j=v[i].size()-1; j>=0; j--) cout << v[i][j] << " ";
		}
		cout << "\n";
	}	
	return 0;
}
