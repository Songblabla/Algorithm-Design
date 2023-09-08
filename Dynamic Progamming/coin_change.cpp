#include<bits/stdc++.h>
using namespace std;
int mem[10001];
int main(){
    int n,m;
    cin >> n >> m;
    int coins[n];
    for (int i=0;i<n;i++){
        cin >> coins[i];
    }
    mem[0]=0;
    mem[1]=1;
    for (int i=2;i<=m;i++){
        int mi=INT_MAX;
        for (int j=n-1;j>=0;j--){
            if (i>=coins[j]){
                mi = min(mem[i-coins[j]] + 1,mi);
                mem[i] = mi;
            }
        }
    }
    cout << mem[m];
}