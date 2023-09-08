#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,k,m;
    cin >> n1 >> n2 >> k >> m;
    int arr1[n1],arr2[n2];
    for (int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    for (int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    if (arr2[n2-m]>arr1[k-1]){
        cout << "YES";
    }else{
        cout << "NO";
    }
}