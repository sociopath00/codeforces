#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    int count = 0;
    string s;
    char temp = ' ';

    cin >> num;
    cin >> s;

    for(int i=0; i<num; ++i){
        if(temp==s[i])
            ++count;

        temp = s[i];
    }

    cout << count << "\n";
}
