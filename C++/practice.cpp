#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    a = "abcd";
    b = "ef";
    string c = a+b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<c<<endl;
    for(int i = 0; i<a.length();i++){
        if(i == 0 ){
            cout<<b[0];
        }
        else{
            cout<<a[i];
        }
    }
    cout<<" ";

    for(int j = 0; j<b.length();j++){
        if(j == 0 ){
            cout<<a[0];
        }
        else{
            cout<<b[j];
        }
    }
  
    return 0;
}