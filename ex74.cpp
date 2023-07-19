#include <iostream>
#include <string>
using namespace std;

string test(string s){
    if(s.substr(0, 3) == "abc" || s.substr(0, 3) == "xyz"){
        return s.substr(0, 3);
    }
    else return "";
}

int main(){

cout << test("abc") << endl;
cout << test("abcded") <<endl;
cout << test("baskc") <<endl;
cout << test("xyz") <<endl;
cout << test("xyzads") <<endl;

return 0;
}
