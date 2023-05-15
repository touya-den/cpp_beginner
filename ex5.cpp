#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    getline(cin, s);
    cout << "Your string is " << s << endl;
    if(s.length() > 2 && (s[0] == 'i' && s[1] == 'f')){
        cout << s << endl;
    }
    else{
        s = "if " + s;
        cout << s << endl;
    }

return 0;
}
