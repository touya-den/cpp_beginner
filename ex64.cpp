#include <iostream>
using namespace std;

string test(string a, string b){
    if(a.length() > 1 && b.length() > 1){
        a.erase(0, 1);
        b.erase(0, 1);
        return a + b;
    }
    else{
        if(a.length() == 1 && b.length() > 1){
            b.erase(0, 1);
            return a + b;
        }
        else if (a.length() > 1 && b.length() == 1){
            a.erase(0, 1);
            return a + b;
        }
        else return a + b;
    }
}

int main(){

cout << test("Hello", "Hi") << endl;
cout << test("JS", "Python") << endl;
cout << test("C", "C#") << endl;

return 0;
}
