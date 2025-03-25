#include <iostream>

using namespace std;

void zerotoend(){

    int arr[8] = {1, 2, 0, 4, 3, 0, 5, 0};
    int len = sizeof(arr)/4;

    int i = 0;
    int id = 0;
    int ld = len;
    int j = 0;
    cout<<len<<endl;
    while(i<len){
        if(arr[i]!=0){
            arr[id] = arr[i];
            id++;
            
        }
        i++;
    }

    while(id<len){
        arr[id] = 0;
        id++;
    }
    
    
    while(j<len){
        cout<<arr[j]<<" ";
        j++;

    }
}

void shifting(){

    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr)/4;
    int d = 3;
    int temp[d];
    int k = 0;
    int tempi = 0;
    int i = 0;
    int j = size-d-1;
    while(i<size){
        if(i<d){
            temp[tempi] =  arr[i];
            tempi++;
        }
        i++;
    }

    //REmove
    for(int k = 0;k<d;k++){
        cout<<temp[k]<<" ";
    }
    //Remove

    cout<<endl;
    i = 0;
    while(i<size){
        arr[i] = arr[i+d];
        i++;
    }

    i = 0;
    k = 0;
    while(i<size){
        if(i>j){
            arr[i] = temp[k];
            k++;
        }
        i++;
    }
    
    //REmove
    for(int k = 0;k<size;k++){
        cout<<arr[k]<<" ";
    }
    //Remove
    

}


int main(){

    shifting();
    
    



    return 0;
}