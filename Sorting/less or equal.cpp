#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,count=0,res=0;
    cin >> n; 
    vector <int> v;
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for (auto &y:v){
        for (int i=0;i<n;i++){
            if (i<=y){
                count++;
            }
            if (count == x){
            res=i;
            }
        }
    }
    cout << res;
}