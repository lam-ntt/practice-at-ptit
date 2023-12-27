#include<bits/stdc++.h>
using namespace std;

void change(string s, vector<int> &v){
	for(int i=s.size()-1; i>=0; i--)
		v.push_back(s[i]-'0');
}

void removeZero(vector<int> &v){
	while(v[v.size()-1]==0&&v.size()>0){
		v.pop_back();
	}
}

int compare(vector<int> a, vector<int> b){
	if(a.size()>b.size()) return 1;
	if(a.size()<b.size()) return -1;
	
	for(int i=a.size()-1; i>=0; i--){
		if(a[i]>b[i]) return 1;
		else if(a[i]<b[i]) return -1;
	}
	return 0;
}

void sub(vector<int> a, vector<int> b, vector<int> &v){
	v.clear();
	while(b.size()<a.size()) b.push_back(0);
	int temp, re=0;
	for(int i=0; i<a.size(); i++){
		temp=a[i]-b[i]-re; re=0;
		if(temp<0){
			temp+=10; re=1;
		}
		v.push_back(temp);
	}
	removeZero(v);
}

void print(vector<int> v){
	for(int i=v.size()-1; i>=0; i--)
		cout << v[i];
	cout << "\n";
}

void solve(string s1, string s2){
	vector<int> a, b;
	change(s1, a); change(s2, b);
	
	vector<int> res, carry;
	int finish=a.size()-1;
	int start= finish-b.size()+1;
	int pos=finish;
	while(pos>start){
		carry.insert(carry.begin(), a[pos--]);
		a.pop_back();
	}
	
	while(a.size()>0){
		carry.insert(carry.begin(), a.back());
		a.pop_back();
		
		int count=0;
		while(compare(carry, b)!=-1){
			++count;
			sub(carry, b, carry);
		}
		
		if(count>=10){
			res.insert(res.begin(), count/10);
			res.insert(res.begin(), count%10);
		}else{
			res.insert(res.begin(), count);
		}	
	}
	removeZero(res);
	print(res);
}

int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2; cin >> s1 >> s2;
		solve(s1, s2);
	}
	return 0;
}
