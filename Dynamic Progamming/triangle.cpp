#include<bits/stdc++.h>
using namespace std;
int table[101][1001];
int main(){
    int n,x,ans=0;
    cin >> n;
    //map<int,vector<int>> table;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cin >> x;
            table[i][j]=x;
           // table[i].push_back(x);
            if (j==1){
                table[i][j]+=table[i-1][j];

            }else if (j==n){
                table[i][j]+=table[i-1][j-1];
            }else{
                if(table[i-1][j-1]>table[i-1][j]){
                    table[i][j]+=table[i-1][j-1];
                }else{
                    table[i][j]+=table[i-1][j];
                }
            }
            if (ans < table[i][j]){
               ans = table[i][j]; 
            }
            
        }
    }
    cout << ans;
}