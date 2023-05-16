#include <iostream>
#include <string>
using namespace std;

int main(){

    string s, a;
    int c;
    getline(cin, s);
    c = s.length();
    if(s.length() < 2){
        cout << s;
    }
    else{
        a = s.substr(0, 2);
        s = a + a + a + a;
        cout << s;
    }

return 0;
}
