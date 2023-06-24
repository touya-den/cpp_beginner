#include <iostream>
using namespace std;

string test(string a){
    int i = 0;
    if(a.length() %  2 == 0){
        i = a.length() / 2;
        return a.substr(0, i);
    }
    else{
        i = a.length() / 2 + 1;
        return a.substr(0, i);
    }
}

int main(){

cout << test("abcdfe") << endl;
cout << test("touyaden") << endl;
cout << test("ahshitttt") << endl;

return 0;
}
