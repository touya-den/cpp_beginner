#include <iostream>
#include <string>
using namespace std;

string test(string s, char a){
    for(int i = 1; i <= s.length() - 2; i++){
        if(s[i] == a){
            s.erase(i, 1);
            i--;
        }
    }
    return s;
}

int main(){

cout << test("abaaaaacaaaada", 'a') << endl;
cout << test("xxHxix", 'x') << endl;
cout << test("xabjbhtrb", 'b') << endl;

return 0;
}
