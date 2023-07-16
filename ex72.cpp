#include <iostream>
#include <string>
using namespace std;

string test(string a, string b){
    if(a.length() >= 1){
        if(b.length() >= 1){
            return a.substr(0, 1) + b.substr(b.length() - 1, 1);
        }
        else if(b == ""){
            return a.substr(0, 1) + "#";
        }
    }
    else if(a == ""){
        if(b.length() >= 1){
            return "#" + b.substr(b.length() -1, 1);
        }
        else if(b == ""){
            return "##";
        }
    }
}

int main(){

cout << test("Hello", "Hi") << endl;
cout << test("", "") << endl;
cout << test("Hi", "") << endl;
cout << test("", "Hi") << endl;

return 0;
}
