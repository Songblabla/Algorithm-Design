#include<bits/stdc++.h>
using namespace std;
int mem[10001];
int main(){
    int n,k,x;
    cin >> n >> k;
    int type[k];
    for (int i=0;i<k;i++){
        cin >> type[i];
    }
    mem[0]=1;
    for (int i=1;i<=n;i++){
        for (int j=0;j<k;j++){
            if (i>=type[j]){
                mem[i]+=mem[i-type[j]];
            }
            mem[i]%=1000003;
        }
    }
    cout << mem[n];
    
    
}