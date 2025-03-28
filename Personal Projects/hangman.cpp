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
    while(i<size/* && (i+d) < size*/){
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

class Counter{
    public:
    int count;
    Counter(){
        count = 0;
    }

    int getcount(){
        return count;
    }
    void operator ++(){
        ++count;
    }
};

class Distance{
    public:
    int feet;
    float inch;
    Distance(){
        feet = 0;
        inch = 0;
    }
    Distance(int a ,int b){
        feet = a;
        inch = b;
    }
    void getDistance(){
        cout<<"Enter Feet";
        cin>>feet;
        cout<<"Enter inches";
        cin>>inch;
    }
    void showDistance(){
        cout<<endl<<feet<<""<<inch<<"";
    }


    
};


int main(){
    
    // shifting();
    // Counter c1,c2;
    // cout<<c1.getcount()<<endl;
    // cout<<c2.getcount()<<endl;
    // ++c1;++c2;++c2;
    // cout<<c1.getcount()<<endl;
    // cout<<c2.getcount();
    
    Distance d1,d2;
    
    
    
    return 0;
}