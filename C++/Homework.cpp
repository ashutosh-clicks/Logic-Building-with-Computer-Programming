#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// string binary;
    // cin>>binary;


    // int count = binary.length();
    // /*for(int i = 0; binary > 0; i++){
    //     count++;
    //     binary = binary/10;
    // }*/
    // int power = pow(2,count-1);
    // int j = -1;
    // for(int i = (count-1); i>=0; i--){
    //     // cout<<binary[i]<<endl;
    //     j++;
    //     if(binary[i] == 49 and i!= 0){
    //         power = power + (pow(2,j));

    //         // power++;
    //     }

    // }
    // // cout<<power<<endl;

    // printf("%d",power);


    /*int i,a,x,b,c;

    for(int i = 0; i <=999;i++){
        a = i%10;
        x = i%10;
        b = x%10;
        c = x%10;

        if(a*a*a + b*b*b + c*c*c == i){
            cout<<"Number"<<endl;
        }
    }*/
    

    //Program to find a 4 digit perfect square whose first 2 and last 2 digits
    // are also perfect sqauares
    /*int s = 1681;
    int a,b;
    for(int i = 1000; i <= 9999; i++){
        a = s%100;
        b = s/100;
    }
    int roota = sqrt(a);
    int rootb = sqrt(b);
    
    if(sqrt(a) == roota && rootb == rootb){
        cout<<"Entered number is a Perfect square";
    }*/

    //Program to calcutate factorial of a number
    /*int a;
    cout<<"Enter Number";
    cin>>a;
    int f = 1;
    for(int i = 1; i<= a; i++){
        f = i*f;
        cout<<f<<endl;

    }*/

    //Program to find x^y
    /*int b,p;
    cout<<"Enter Base";
    cin>>b;
    cout<<"Enter Power";
    cin>>p;

    int sol = pow(b,p);
    cout<< sol;*/


    //Program to check prime or not
    int a;
    cout<<"Enter Number";
    cin>>a;
    int count = 0;
    for(int i = 1;i<=a;i++){
        // cout<<floor(a/i)<<endl;
        if(a%i == 0){
            count++;
        }
        // cout<<count;
    }

    if(count>2){
        cout<<"Not a Prime";
    }
    else{
        cout<<"Prime";
    }

    return 0;
}