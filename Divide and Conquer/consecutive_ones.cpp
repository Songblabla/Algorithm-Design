#include<bits/stdc++.h>
using namespace std;
void show(string ans,int n,int k,int len,bool now){
    if (len>=k) now = true;
    if (ans.length()<n ){
        show(ans+"0",n,k,0,now);
        show(ans+"1",n,k,len+1,now);
    }
    if (ans.length()==n && now){
        cout << ans << "\n";
    }
}
int main(){
    int n,k;
    cin >> n >> k;
    show("",n,k,0,false);
}