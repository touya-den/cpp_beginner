#include <iostream>
using namespace std;

string test(string a){
    string b = "";
    if(a.length() > 2){
        for(int i = 1; i <= a.length() - 2; i++){
            b = b + a[i];
        }
    }
    else if(a.length() == 2){
        return a;
    }
    else return "None";
    return b;
}

int main(){

cout << test("Hello") << endl;
cout << test("Hi") << endl;
cout << test("H") << endl;
cout << test("Python") << endl;

return 0;
}
