#include <bits/stdc++.h>

using namespace std;

int main(){
    string word;
    string t;
    string trans = "";

    cin >> word;
    cin >> t;

    for(int i=word.size(); i>0; --i)
        trans += word[i-1];

    if(t==trans)
        cout << "YES\n";
    else
        cout << "NO\n";
}
