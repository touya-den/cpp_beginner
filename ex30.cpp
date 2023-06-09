#include <iostream>
#include <string>
using namespace std;

int count(string t){
    int counter = 0;
    int temp = 0;
    int a = t.length() - 2;
    for(int i = 0; i <= t.length() - 4; i++){
        if(t.substr(i, 2) == t.substr(a, 2)){
            counter+=1;
        }
    }
    return counter;
}

int main(){

cout << count("abab") << endl;
cout << count("abcdsab") << endl;
cout << count("abcdabab") << endl;
cout << count("abcabdabab") << endl;
cout << count("abcabd") << endl;

return 0;
}
