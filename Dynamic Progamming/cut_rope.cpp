#include<bits/stdc++.h>
using namespace std;
int mem[4001];
int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    mem[0]=0;
    for (int i=1;i<=n;i++){
        mem[i]= -1;
        if (i-a>=0) mem[i] = max(mem[i],mem[i-a]);
        if (i-b>=0) mem[i] = max(mem[i],mem[i-b]);
        if (i-c>=0) mem[i] = max(mem[i],mem[i-c]);
        if (mem[i] != -1) mem[i]++; 
    }
    cout << mem[n];
}