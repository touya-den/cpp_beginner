#include <iostream>
#include <string>
using namespace std;

string test(string a, string b){
    if(a.length() == 1 || b.length() == 1){
        return a + b;
    }
    if(a.length() == b.length()){
        return a + b;
    }
    else if(a.length() < b.length()){
        if(a.length() == 0){
            return b;
        }
        else{
            a.erase(a.length() - 1, 1);
            return a + b;
        }
    }
    else if(b.length() < a.length()){
       if(b.length() == 0){
            return a;
        }
        else{
            b.erase(0, 1);
            return a + b;
        } 
    }
}

int main(){

cout << test("abc", "abcd") << endl;
cout << test("Python", "Python") << endl;
cout << test("JS", "Python") << endl;
cout << test("Python", "JS") << endl;
cout << test("a", "b") << endl;
cout << test("", "abcd") << endl;
cout << test("abc", "") << endl;
cout << test(" ", "abcd") << endl;

return 0;
}
