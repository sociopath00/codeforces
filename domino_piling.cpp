#include <bits/stdc++.h>

using namespace std;

int solution(const int &m, const int &n){
    int res;
    res = (m*n)/2;
    return res;
}

int main(){
    int m, n;
    int result;

    cin >> m >> n;

    result = solution(m, n);
    cout << result << "\n";

}

/**
Time: 62 ms
Memory: 0 KB
*/
