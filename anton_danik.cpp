#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string winners;
    cin >> n;
    cin >> winners;

    int antonWins = 0;
    int danikWins;

    for(int i=0; i<n; ++i){
        if(winners[i] == 'A')
            ++antonWins;
    }

    danikWins = n - antonWins;

    if(antonWins > danikWins)
        cout << "Anton\n";
    else if(antonWins < danikWins)
        cout << "Danik\n";
    else
        cout << "Friendship\n";

}
