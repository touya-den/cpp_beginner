#include <iostream>
#include <string>
using namespace std;

string test(string s, int a){
    if(s.length() == 2) return s;
    return s.substr(a, 2);
}

int main(){

cout << test("hello", 1) << endl;
cout << test("python", 2) << endl;
cout << test("on", 1) << endl;

return 0;
}
