#include<bits/stdc++.h>
using namespace std;
int table[501][501] = {0};
int main(){
    int n,m;
    vector <int> result;
    cin >> n >> m;
    int v[n+1],w[n+1];
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    for (int i=0;i<n;i++){
        cin >> w[i];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (j >= w[i-1]){
                table[i][j] = max(table[i-1][j],table[i-1][j-w[i-1]] + v[i-1]);
            }else{
                table[i][j] = table[i-1][j];
            }
        }
    }
    for(int i=n;i>0;--i){
        if(m>=w[i-1] && table[i][m]==v[i-1]+table[i-1][m-w[i-1]]){
            m-=w[i-1];
            result.push_back(i);
        }
    }
    cout << result.size() << "\n";
    for (auto &x:result){
        cout << x << " ";
    }
    
}