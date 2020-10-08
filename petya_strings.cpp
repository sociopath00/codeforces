#include <bits/stdc++.h>

using namespace std;

int solution(string &a, string &b){
    std::transform(a.begin(), a.end(), a.begin(), ::tolower);
    std::transform(b.begin(), b.end(), b.begin(), ::tolower);

    for(int i=0; i<a.length(); ++i){
        if(a[i] > b[i])
            return 1;
        else if(a[i] < b[i])
            return -1;
    }
    return 0;
}

int main(){
    string x, y;
    int result;

    cin >> x;
    cin >> y;

    result = solution(x, y);
    cout << result << "\n";

}

/**
Time: 62 ms
Memory: 0 KB
*/
