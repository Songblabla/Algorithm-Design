#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        if (i==1) arr[i]+=arr[i-1];
        else if(i==2) arr[i]+=max(arr[i-1],arr[i-2]);
        else if (i > 2){
            if (arr[i-1]>arr[i-2] && arr[i-1]>arr[i-3]) arr[i]+=arr[i-1];
            else if (arr[i-2]>arr[i-1] && arr[i-2]>arr[i-3]) arr[i]+=arr[i-2];
            else if (arr[i-3]>arr[i-2] && arr[i-3]>arr[i-1]) arr[i]+=arr[i-3];
        } 
    }
    cout << arr[n-1] << "\n";
    return 0;
}