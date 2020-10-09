#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    char x = s[0];

    if(islower(x)){
        s[0] = toupper(x);
    }

    cout << s << endl;
}
