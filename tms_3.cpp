#include <iostream>
#include <string>
using namespace std;

string test(string s, int a){
    string b = "Your s is left nothing\n";
    if(s.length() == 0){
        return "None\n";
    }
    if(s.length() == 1){
        return s.erase(0,1), b;
    }
    if(s.length() > 1){
        return s.erase(a - 1, 1), s;
    }
}

int main(){

    cout << test(" ", 1);
    cout << test("i", 1);
    cout << test("", 1);
    cout << test("python", 2) << endl;
    cout << test("python", 5) << endl;

return 0;
}
