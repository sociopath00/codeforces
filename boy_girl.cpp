#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int dist_char;

    cin >> s;

    set<char> chars (s.begin(), s.end());

    dist_char = chars.size();
    if(dist_char%2==0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";
}
