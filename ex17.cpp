#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    string a = "yt";
    getline(cin, s);
    cout << "Your s is " << s << endl;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == a[0]){
            if(s[i + 1] == a[1]){
                s.erase(i, 2);
                cout << s << endl;
            }
        }
    }
    cout << s << endl;

return 0;
}
