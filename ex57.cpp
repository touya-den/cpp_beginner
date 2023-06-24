#include <iostream>
using namespace std;

string test(string a, string b){
    return a + b + b + a;
}

int main(){

string a1 = "Hi";
string a2 = "Hello";
cout << test(a1, a2) << endl;

string b1 = "whats";
string b2 = "app";
cout << test(b1, b2) << endl;

string c1 = "ah";
string c2 = "sjt";
cout << test(c1, c2) << endl;

return 0;
}
