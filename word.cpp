#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;
    int upperCount = 0;
    int lowerCount = 0;

    for(int i=0; i<s.length(); ++i){
        if(s[i] < 97)
            ++upperCount;
        else
            ++lowerCount;
    }

    if(upperCount > lowerCount)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << "\n";
}
