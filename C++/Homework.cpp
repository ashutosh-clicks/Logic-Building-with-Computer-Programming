#include <iostream>
#include<cmath>
using namespace std;

int main() {
	string binary;
    cin>>binary;


    int count = binary.length();
    /*for(int i = 0; binary > 0; i++){
        count++;
        binary = binary/10;
    }*/
    int power = pow(2,count-1);
    int j = -1;
    for(int i = (count-1); i>=0; i--){
        // cout<<binary[i]<<endl;
        j++;
        if(binary[i] == 49 and i!= 0){
            power = power + (pow(2,j));
            // power++;
        }
        cout<<power<<endl;

    }



    return 0;
}