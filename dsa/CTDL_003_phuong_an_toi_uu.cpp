#include<bits/stdc++.h>
using namespace std;

map<int, int> mp;
int n, w, g_max=-1, x[105], id[105]; 
double b, g, c[105], a[105];

void readAndInit(){
	cin >> n >> w;
	for(int i=0; i<n; i++){
		cin >> c[i];
	}
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	b=w, g=0;
}

void sort(){
	double value; 
	int idx, mark[105]={0};
	for(int i=0; i<n; i++){
		value=-1;
		for(int j=0; j<n; j++){
			if(mark[j]==0&&c[j]/a[j]>value){
				value=c[j]/a[j];
				idx=j;
			}
		}
		id[i]=idx;
		mark[id[i]]=1;
	}
}

void update(){
	if(g<g_max) return;
	if(g>g_max){
		g_max=g;
		mp.clear();
	}
	for(int i=0; i<n; i++){
		mp[id[i]]=x[i];
	}
}

void tryy(int i){
	for(int j=1; j>=0; j--){
		x[i]=j;
		b-=x[i]*a[id[i]];
		g+=x[i]*c[id[i]];
		if(i==n-1&&b>=0) update();
		else if(b>=0&&g+b*c[id[i+1]]/a[id[i+1]]>g_max) tryy(i+1);
		b+=x[i]*a[id[i]];
		g-=x[i]*c[id[i]];
	}
}

int main(){
    readAndInit();
	sort();
	tryy(0);
	
	cout << g_max << "\n";
	for(auto it: mp){
		cout << it.second << " ";
	}
	return 0;
}
