// Nguyễn Thị Thanh Lam
// B21DCCN474
// N06
// D21CQCN06_B
// BN02

#include<bits/stdc++.h>
using namespace std;

map<string, string> mp;
set<string> s_sym;

struct infor{
	string sym;
	float fre;
	string code;
};

struct node{
	string sym;
	float fre;
	node *left, *right;
	node(string symbol, float freq, node* l, node* r){
		sym=symbol;
		fre=freq;
		left=l;
		right=r;
	}
};

struct comp{
	bool operator()(node* a, node* b){
		return a->fre>b->fre;
	}
};

void assign(string s, node* head){
	if(head->left==NULL&&head->right==NULL) mp[head->sym]=s;
	else{
		assign(s+"1", head->left);
		assign(s+"0", head->right);
	}
}

void code(string s, int n, infor x[]){
	string sub="";
	for(int i=0; i<s.size(); i++){
		sub+=s.substr(i, 1);
		if(s_sym.count(sub)!=0){
			cout << mp[sub];
			sub="";
		}
	}
}

void decode(string s, node* head, node* start){
	if(head->left==NULL&&head->right==NULL){
		cout << head->sym;
		if(s=="") return;
		else if(s[0]=='1') decode(s.substr(1, s.size()-1), start->left, start);
		else if(s[0]=='0') decode(s.substr(1, s.size()-1), start->right, start);
	}else{
		if(s[0]=='1') decode(s.substr(1, s.size()-1), head->left, start);
		else if(s[0]=='0') decode(s.substr(1, s.size()-1), head->right, start);
	}
}

int main(){
	cout << "Nhap vao so ban tin: \n";
	int n; cin >> n;
	infor x[n];
	for(int i=0; i<n; i++){
		cout << "Nhap vao ten va xac suat cua ban tin " << i+1 << ": \n";
		cin >> x[i].sym >> x[i].fre;
	}
	
	// Mã hóa và tạo cây Huffman
	priority_queue<node*, vector<node*>, comp> pq;
	for(int i=n-1; i>=0; i--){
		node* tmp=new node(x[i].sym, x[i].fre, NULL, NULL);
		pq.push(tmp);
	}
	while(pq.size()>=2){
		node* l=pq.top(); pq.pop();
		node* r=pq.top(); pq.pop();
		pq.push(new node(l->sym+r->sym, l->fre+r->fre, l, r));
	}
	
	node* head=pq.top();
	assign("", head);
	for(int i=0; i<n; i++) x[i].code=mp[x[i].sym];
	for(int i=0; i<n; i++) s_sym.insert(x[i].sym);

	// Tính toán các thông tin của bộ mã
	float l=0;
	for(int i=0; i<n; i++) l+=x[i].fre*x[i].code.size();
	float sigma=0;
	for(int i=0; i<n; i++) sigma+=x[i].fre*pow(l-x[i].code.size(), 2);

	// In ra thông tin mã hóa
	cout << "Thong tin bo ma: \n";
	for(int i=0; i<n; i++) cout << x[i].sym << " " << x[i].fre << " " << x[i].code << "\n";
	cout << "Do dai trung binh: " << l << "\n";
	cout << "Do lech chuan: " << sigma << "\n";
	
	string s;
	// Mã hóa 1 chuỗi kí tự
	cout << "Nhap vao chuoi ki tu: \n";
	cin >> s;
	cout << "Chuoi sau khi ma hoa: \n";
	code(s, n, x);
	cout << "\n";

	// Giải mã 1 chuỗi kí tự
	cout << "Nhap vao chuoi ki tu: \n";
	cin >> s;
	cout << "Chuoi sau khi giai ma: \n";
	decode(s, head, head);
	return 0;
}
