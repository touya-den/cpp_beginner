#include <iostream>
#include <string>
using namespace std;

    string test(string s){
        return s.length() > 3 ? s.substr(0, 1) + s.substr(1, 1) + s.substr(2, 1) + s + s.substr(0, 1) + s.substr(1, 1) + s.substr(2, 1): s + s + s;
    }

int main(){

    cout << test("Python") << endl;
    cout << test("JS") << endl;
    cout << test("Code") << endl;
    cout << test("abc") << endl;

return 0;
}
