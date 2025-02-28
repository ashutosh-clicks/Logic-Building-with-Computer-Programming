#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    
    vector <int> v(n);   
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    
    int q;
    cin>>q;
    int y[q];
    for(int i = 0;i < q;i++){
        cin>>y[i];
    }
    
    for(int j =0; j<q;j++){
        for(int k = 0; k<n;k++){
            if(y[j] == v[k]){
                cout<<"Yes"<<" "<<k;
            }
        }
    }
    return 0;
}
