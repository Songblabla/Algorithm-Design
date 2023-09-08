#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n],mem[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    mem[0]=1;
    int res = 1;
    for (int i=1;i<n;i++){
        mem[i]=1;
        for (int j=0;j<i;j++){
            if (arr[j]<arr[i]){
                mem[i] = max(mem[i],1+mem[j]);
                if (res < max(mem[i],1+mem[j])) res = max(mem[i],1+mem[j]);
            }
        }
    }
    
    /*for (int i=0;i<n;i++){
        res = max(res,mem[i]);
    }*/
    cout << res;
    
}