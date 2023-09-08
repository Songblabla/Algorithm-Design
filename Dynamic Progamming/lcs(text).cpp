#include<bits/stdc++.h>
using namespace std;
int table;
int main(){
    int a,b;
    cin >>a >>b;
    int table[a+1][b+1] = {0};
    string m,n,ans=" ";
    cin >> m >> n;
    int s1 = m.length();int s2 = n.length();
    
    for(int i=0;i<=s1;i++){
        for(int j=0;j<=s2;j++){
            cin >> a;
        } 
    }
        
    for (int i=1;i<=s1;i++){
        for (int j=1;j<=s2;j++){
            if (m[i-1]==n[j-1]){
                table[i][j] = 1+table[i-1][j-1];
                ans=ans+m[i-1];
            }else{
                table[i][j] = max(table[i][j-1],table[i-1][j]);
            }
        }
    }
    int x,y;
    x = s1;y = s2;
    string res = "";
    while (x != 0 && y != 0) {
        if (m[x-1] == n[y-1]) {
            res = m[x-1]+res;
            x--;
            y--;
        } else {
        if (table[x-1][y] > table[x][y-1]) {
            x--;
        } else {
            y--;
        }
        }
    }
    cout << res;
}