#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,x,count=0,res=0;
    cin >> n >> x; 
    vector <int> v(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for (int i=0;i<n;i++){
        int count=0;
        for (auto &y:v){
            if (i>=y){
                count++;
            }  
        }
        if (count == x){
            res=i;
            break;
        }
    }
    if (res==0){
        if (v[0]>1){
            if (x==0) {
                cout << v[0]-1;
            }else{
                cout << v[0];
            }
            
        }else{
           cout << -1; 
        }
    }else{
        cout << res;  
    }
    
}