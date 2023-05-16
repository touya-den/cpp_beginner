#include <iostream>
#include <string>
using namespace std;


int main(){

    string s;
    int a;
    cin >> s;
    cout << "Your string s is " << s << endl;
    a = s.length();
    if(s.length() >= 1){
        s = s[a - 1] + s + s[a - 1];
        cout << "After everything your s is " << s << endl;
    }
    else{
        cout << "Nothing";
    }

return 0;
}
