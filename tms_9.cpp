#include <iostream>
#include <string>
using namespace std;

int test(string s){
    int count = 0;
    for(int i = 0; i <= s.length() - 3; i++){
        if(s.substr(i, 3) == "abc" || s.substr(i, 3) == "xyz"){
            cout << "At position " << i + 1 << "." << endl; 
            count += 1;
        }
    }
    if(count == 0) return 0;
    return count;
}

int main(){

cout << test("abcabc") << endl;
cout << test("abcxyzabc") <<endl;
cout << test("baskc") <<endl;
cout << test("xyz") <<endl;
cout << test("xyzads") <<endl;

return 0;
}
