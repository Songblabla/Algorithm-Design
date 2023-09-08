#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,a,b,c=0;
    cin >> n >> m >> k;
    vector <int> beauty(n),fire(k);
    vector <vector<int>> adj(m);
    bool visited[n];
    for (int i=0;i<n;i++){
        cin >> beauty[i];
        c+=beauty[i];
        visited[i] = false;
    }
    for (int i=0;i<k;i++){
        cin >> fire[i];
    }
    for (int i=0;i<m;i++){
        cin >> a >> b;
        adj[a].push_back(b);
    }
    for (int i=0;i<k;i++){
        visited[fire[i]] = true;
        
    }
}