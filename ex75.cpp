#include <iostream>
#include <string>
using namespace std;

string test(string s){
    for(int i = 0; i <= s.length() - 1; i++){
        if(s.substr(i, 1) == "" || s.substr(i, 1) == " ") return "none";
    }
    if(s.length() == 1) return s;
    if(s.length() == 2){
        if(s.substr(0, 1) == s.substr(1, 1)){
            return "true with 2 letters";
        }
        else{
            return "false with 2 letters";
        }
    }
    if(s.substr(0, 1) == s.substr(s.length() - 2, 1)){
        if(s.substr(1, 1) == s.substr(s.length() - 1, 1)){
            return "1";
        }
    }
    return "0";
}

int main(){

cout << test("abab") << endl;
cout << test("abcdef") << endl;
cout << test("xyzsderxy") << endl;
cout << test("aba") << endl;
cout << test("ab") << endl;
cout << test("aa") << endl;
cout << test("a") << endl;
cout << test("") << endl;
cout << test(" ") << endl;
cout << test("ab ba") << endl;

return 0;
}
