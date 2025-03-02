#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Insertion{
    private:
    int size = 5;
    int arr[5] = {1,2,3,4};
    int x;

    public:
    void insertAtBeg(){
        cout<<"Enter desired value: ";
        for(int i = (size-1);i>=0;i--){
            arr[i+1] = arr[i];
        }
        cin>>x;
        arr[0] = x;
        for(auto i: arr){
            cout<<arr[i]<<" ";
        }
    }

    void insertAtEnd(){
        cout<<"Enter desired value: ";
        cin>>x;
        arr[size-1] = x;
        for(int i = 0;i<=size-1; i++){
            cout<<arr[i]<<" ";
        }

    }
};
    
int main() {
    Insertion i1;
    Insertion i2;
    // i1.insertAtBeg();
    i2.insertAtEnd();

    return 0;
}
