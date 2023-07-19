#include <iostream>
#include <string>
using namespace std;

string test(string s){
    string temp = "";
    if(s == "") return "0";
    if(s.length() == 1) return s;
    if(s.length() > 1){
        temp = s.substr(s.length() - 1, 1) + s.substr(s.length() - 2, 1);
        s.replace(s.length() -2, s.length() - 1, temp);
        return s;
    }
}

int main(){

cout << test("Hello") << endl;
cout << test("") << endl;
cout << test("C") << endl;
cout << test("PHP") << endl;

return 0;
}
