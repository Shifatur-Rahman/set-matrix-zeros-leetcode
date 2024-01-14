#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    int arr[m][n] = {
                {1,3,5,2,0},
                {2,1,6,7,9},
                {3,0,1,5,3},
                {1,2,3,4,5}
    };
    vector<int> v1;
    vector<int> v2;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 0){
                v1.push_back(i);
                v2.push_back(j);
            }
        }
    }

    for(auto i1:v1){
        for(int i = 0; i<n; i++){
            arr[i1][i] = 0;
        }
    }
    for(auto i2:v2){
        for(int j=0; j<m; j++){
            arr[j][i2] = 0;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
