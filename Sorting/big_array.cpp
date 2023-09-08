#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,q,x,c,t,z=0;
    map<int,int> m,m3;
    cin >> n >> q;
    for (int i=0;i<n;i++){
        cin >> x >> c;
        m[x]+=c;
    }
    for (auto &y:m){
        z += y.second;
        m3[z] = y.first;     
    }
    while(q--){
        cin >> t;
        cout << m3.lower_bound(t)->second << "\n";
    }
}