#include <iostream>
#include <string>
using namespace std;

string test(string s){
    string a = "";
    if(s.length() > 2){
        a = s.substr(0, 2);
        s.erase(0, 2);
        return s + a;
    }
    else{
        return s;
    }
}

int main(){

cout << test("Hello") << endl;
cout << test("JS") << endl;
cout << test("abcd") << endl;

return 0;
}
