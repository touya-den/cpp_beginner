#include <iostream>
#include <string>
using namespace std;

int count(string a, string b){
    int counter = 0, temp = 0;
    for(int i = 0; i <= a.length() - 2; i++){
        if(a[i] == b[0]){
            temp++;
            if((a[i + 1] == b[1]) && (temp < b.length())){
                counter+=1;
            }
            temp = 0;
        }
    }
    return counter;
}

int main(){

cout << count("abab", "ab") << endl;
cout << count("ababdbaab", "ab") << endl;
cout << count("aabaab", "ab") << endl;
cout << count("babcbdaba", "ba") << endl;

return 0;
}
