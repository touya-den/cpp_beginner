#include <iostream>
#include <string>
using namespace std;

bool test(string s){
    return s.substr(0, 1) == "C" & s.substr(1, 1) == "#";
}

int main(){

    cout << test("C++ Sharp") << endl;
    cout << test("C##") << endl;
    cout << test("C+#") << endl;

return 0;
}
