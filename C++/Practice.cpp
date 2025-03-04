#include<iostream>
// #include<vector>
#include <algorithm>
using namespace std;


void rtri(){
    for(int i = 0;i<=5;i++){
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void ltri(){
    int n = 5;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= 5 - i; j++) {  // Print spaces
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {  // Print '*'
            cout << "* ";
        }
        cout << endl;
    }
    
}

void pyramid(){
    for(int i = 0;i<=5;i++){
        for(int j = 0;j<=5-i;j++){
            cout<<"  ";
        }
        for(int j = 0;j<=i;j++){
            cout<<"* ";
        }
        for(int j = 0; j<=i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void prime(int n){
    int count =0;
    for(int i = 1; i<=n;i++){
        if((n%i) == 0){
            count++;
        }
    }
    if(count > 2){
        cout<<"Not a prime";
    }
    else{
        cout<<"prime";
    }
}

void maxofthree(int a,int b,int c){
    if(a > b && a>c){
        cout<<"A is Max";
    }
    else if(b>a && b>c){
        cout<<"B is Max";
    }
    else if(c>a && c>b){
        cout<<"C is Max";
    }
    else if(a == b || a == c || b==c){
        cout<<"2 inputs have the same value";
    }
}

void factorial(int n){
    int f =  1;
    for(int i = 1;i<=n;i++){
        f = f*i;
    }
    cout<<f;
}

void palindrome(){
    int j;
    string str1 = "oho";
    int n = str1.size();
    string str2 = str1;
    reverse(str1.begin(),str1.end());
    if(str1 == str2){
        cout<<"Is a Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}


void test(int n){
    if(n%2 == 0){cout<<"True";}
}

int main(){
    // rtri();
    // ltri();
    // pyramid();
    // prime(23);
    // maxofthree(11,11,2);
    // factorial(5);
    // palindrome();

    

    return 0;
}