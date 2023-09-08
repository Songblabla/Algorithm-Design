#include<bits/stdc++.h>
using namespace std;
int mem[46];
int main(){
    int n;
    cin >> n;
    mem[0]=0;
    mem[1]=1;
    for (int i=2;i<=n;i++){
        mem[i]=mem[i-1]+mem[i-2];
    }
    cout << mem[n];
}