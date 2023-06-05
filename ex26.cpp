#include <iostream>
#include <string>
using namespace std;

string test(string a, string b){ //b must be more than 2 and with only 1 character
    int n = 0, m = 0;
    for(int i = 0; i <= a.length() - 1; i++){
        if(a[i] == b[1]){
            n++;
            if(n % 3 == 0){
                m+=2;
        }
            else{
                m+=1;
        }
        }
        else{
            n = 0;
        }  
    }
    return to_string(m);
}

int main(){

cout << test("aaaab", "aa") << endl;
cout << test("JSaaakoiaa", "aa") << endl;
cout << test("jjkiaaasew", "aa") << endl;
cout << test("bbaaccaag", "aa") << endl;

return 0;
}
