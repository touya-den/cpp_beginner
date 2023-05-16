#include <iostream>
#include <string>
using namespace std;

int main(){

    string s;
    int a;
    getline(cin, s);
    cout << "Your string s is " << s << endl;
    if(s.length() == 0){
        cout << "None\n";
    }
    else if(s.length() == 1){
        s.erase(0, 1);
        cout << "s is left nothing but (space)\n";
    }
    else if(s.length() > 1){
        cin >> a;
        cout << "You want to remove letter number " << a <<" of your string s\n";
        s.erase(a - 1, 1);
        cout << "After everything, the rest s is " << s << endl;
    }
    

return 0;
}
