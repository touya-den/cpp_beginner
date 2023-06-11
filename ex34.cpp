#include <iostream>
#include <string>
using namespace std;

string test(string s){
    int j = 0;
    string a;
    for(int i = 0; i <= s.length() - 1; i++){
        a = a + s.substr(j, 1);
        if(j <= s.length() - 1){
            if(i % 2 == 0) j+=1;
            if(i % 2 == 1) j+=3;
        }
        if(j > s.length() - 1) break;
    }
    return a;
}

int main(){

cout << test("abcdefghijklmn") << endl;
cout << test("Python") << endl;
cout << test("JavaScript") << endl;
cout << test("HTML") << endl;

return 0;
}
