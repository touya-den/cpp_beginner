#include <iostream>
#include <string>
using namespace std;

int main(){

string s;
char a = 'z';
int t = 0;
getline(cin ,s);
for(int i = 0; i <= s.length() - 1; i++){
    if(s[i] == a){
        t+=1;
        cout << "z appears at " << i + 1 << endl;
    }
}
cout << "z appears for " << t << " times" << endl;

return 0;
}
