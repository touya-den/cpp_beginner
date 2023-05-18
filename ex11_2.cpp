#include <iostream>
#include <string>
using namespace std;

int main(){

    string s, a = "";
    getline(cin, s);
    cout << "Your string s is " << s << endl;
    cout << s.length() << endl;
    if(s.length() > 3){
        s = s.substr(0, 1) + s.substr(1 , 1) + s.substr(2, 1) + s + s.substr(0, 1) + s.substr(1 , 1) + s.substr(2, 1);
        cout << s << endl;
    }
    else{
        s = s + s + s;
        cout << s << endl;
    }

return 0;
}
