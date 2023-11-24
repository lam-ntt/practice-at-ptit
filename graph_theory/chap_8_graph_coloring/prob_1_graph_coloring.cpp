#include<bits/stdc++.h>
using namespace std;

int n, a[105][105], mark[105]={0}, deg[105]={0};
vector<int> node;
set<int> cur_node;

int cmp(int fi, int se){
    return deg[fi]>deg[se];
}

void reset(){
    for(int i=1; i<=n; i++) deg[i]=0;
    for(int i=1; i<=n; i++){
        if(mark[i]) continue;
        for(int j=1; j<=n; j++){
            if(mark[j]) continue;
            deg[i]+=a[i][j];
            deg[j]+=a[i][j];
        }
    }
    sort(node.begin(), node.end(), cmp);
    cur_node.clear();
}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }
    for(int i=1; i<=n; i++) node.push_back(i);
    

    int cnt=0, num=1;
    while(cnt!=n){
        reset();
        for(int i=0; i<node.size(); i++){
            if(mark[node[i]]==0){
                int ok=1;
                for(auto it: cur_node){
                    if(a[node[i]][it]){
                        ok=0; break;
                    }
                }
                if(ok) cur_node.insert(node[i]);
            }
        }
        ++num;
        cnt+=cur_node.size();
        for(auto it: cur_node) mark[it]=1;
    }
    cout << num-1 << "\n";
    return 0;
}
