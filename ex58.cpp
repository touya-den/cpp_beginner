#include <iostream>
using namespace std;

string test(string a, string b){
    int i = 0;
    string a1 = "", a2 = "";
    if(a.length() % 2 == 0){
        i = a.length() / 2;
        a1 = a.substr(0, i);
        a2 = a.substr(i, i);
    }
    else{
        i = a.length() / 2;
        a1 = a.substr(0, i + 1);
        a2 = a.substr(i + 1, i);
    }
    return a1 + b + a2;
}

int main(){

string a1 = "(())";
string a2 = "abcd";
cout << test(a1, a2) << endl;

string b1 = "(()))";
string b2 = "abcd";
cout << test(b1, b2) << endl;

string c1 = "((())";
string c2 = "abcd";
cout << test(c1, c2) << endl;

return 0;
}
