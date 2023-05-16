#include <iostream>
#include <string>
using namespace std;

int main(){

   string s;
   char a;
   int n;
   getline(cin, s);
   cout << "Your string s is " << s << endl;
   n = s.length();
   if(s.length() > 2){
       a = s[0];
       s[0] = s[n-1];
       s[n - 1] = a;
   }
   cout << s;

return 0;
}
