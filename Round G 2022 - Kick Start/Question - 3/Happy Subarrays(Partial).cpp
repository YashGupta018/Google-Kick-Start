#include <bits/stdc++.h> 
using namespace std; 
int main() {
    int t; 
    cin>>t; 
    for (int q = 0; q < t; q++) {
        int result=0; 
        int n;
        cin>>n;
        int arr[n]; 
        for (int i = 0; i < n; ++i)
        cin>>arr[i]; 
        for (int j = 0; j < n; ++j) {
            int yoman=0; 
            for (int i = j; i <n; i++) {
                yoman+=arr[i]; 
                if(yoman>=0) 
                result+=yoman; 
                else 
                break; 
                } 
            } 
        cout<<"Case #"<<q+1<<": "<<result<<endl;
        } 
    return 0; 
}