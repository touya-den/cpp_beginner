#include <iostream>
#include <string>
using namespace std;

string test(string s, int a){
    string temp = "";
    char space = ' ';
    for(int i = 0; i <= a - 1; i++){
        if(s[i] != space){
            temp = temp + s[i];
        }
        else if(s[i] == space){
            temp = temp + "#";
        }
    }
    return temp;
}

int main(){

cout << test("   ", 3) << endl;
cout << test("python", 3) << endl;

return 0;
}
