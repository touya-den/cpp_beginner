#include <iostream>
#include <string>
using namespace std;

string test(string s, int n){
    string a;
    if(s.length() > 3){
        a = s.substr(0,3);
        for(int i = 1; i <= n; i++){
            a+=a;
            return a;
        } 
    }
    else{
        for(int j = 1; j <= n; j++){
            s+=s;
            return s;
        }
    }
}

int main(){

cout << test("Python", 3) << endl;
cout << test("C+ ", 2) << endl;

return 0;
}
