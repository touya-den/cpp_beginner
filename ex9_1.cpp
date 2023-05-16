#include <iostream>
#include <string>
using namespace std;

string test(string s){
    return s.length() >= 1 ? s.substr(s.length() - 1) + s + s.substr(s.length() - 1): s;
}

int main(){

    cout << test("Red") << endl;
    cout << test("Green") << endl;
    cout << test("1") << endl;

return 0;
}
