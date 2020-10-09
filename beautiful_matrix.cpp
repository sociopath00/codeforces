#include <bits/stdc++.h>

using namespace std;

#define ROWS 5
#define COLUMNS 5

int solution(int a[ROWS][COLUMNS]){
    int x = 2;
    int y = 2;

    for(int i=0; i<ROWS; ++i){
        for(int j=0; j<COLUMNS; ++j){
            if(a[i][j] == 1){
                x = x-i;
                y = y-j;
                break;
            }
        }
    }
    x = abs(x);
    y = abs(y);
    return x + y;
}

int main(){
    int arr[ROWS][COLUMNS];
    string s;

    for(int i=0; i<ROWS; ++i){
        int num;
        getline(cin, s);
        istringstream X(s);

        int j = 0;
        while(X>>num){
            arr[i][j] = num;
            ++j;
        }
    }

    int result;
    result = solution(arr);
    cout << result << "\n";

}
