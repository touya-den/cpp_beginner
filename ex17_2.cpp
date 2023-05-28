#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    char a = 'y';
    getline(cin, s);
    cout << "Your s is " << s << endl;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == a){
            s.erase(i, 1);
            cout << s << endl;
        }
    }
    cout << s << endl;

return 0;
}
