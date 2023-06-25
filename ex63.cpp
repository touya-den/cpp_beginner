#include <iostream>
using namespace std;

string test(string a, string b){
    if(a.length() > b.length()){
        return a + b + a;
    }
    else return b + a + b;
}

int main(){

cout << test("Hello", "Hi") << endl;
cout << test("JS", "Python") << endl;

return 0;
}
