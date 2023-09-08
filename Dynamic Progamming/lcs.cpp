#include<bits/stdc++.h>
using namespace std;
int table[501][501] = {0};
int main(){
    string m,n;
    cin >> m >> n;
    int s1 = m.length();int s2 = n.length();
    for (int i=1;i<=s1;i++){
        for (int j=1;j<=s2;j++){
            if (m[i-1]==n[j-1]){
                table[i][j] = 1+table[i-1][j-1];
            }else{
                table[i][j] = max(table[i][j-1],table[i-1][j]);
            }
        }
    }
    cout << table[s1][s2];
}