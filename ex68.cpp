#include <iostream>
#include <string>
using namespace std;

string test(string s, int a){
    string temp = "";
    if(s.length() == 1) return s + s;
    if(s.length() < a*2 ){
        if(s.length() + 1 == a*2){
            for(int i = s.length() - 1; i >= a - 1; i--){
                temp = s[i] + temp;
            }
            return s.substr(0, a) + temp;
        }
    }
    else if(s.length() >= a*2){
        if(s.length() == a*2) return s;
        else{
            return s.substr(0, a) +s.substr(s.length() - a, a);
        }
    }
}

int main(){

cout << test("Hello", 2) << endl;
cout << test("Hello", 3) << endl;
cout << test("Python", 2) << endl;
cout << test("Python", 3) << endl;
cout << test("on", 1) << endl;
cout << test("o", 1) << endl;

return 0;
}
