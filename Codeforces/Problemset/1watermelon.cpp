/*
	Author: ntokala/sleepyd3v
*/
#include <iostream>
#define ld long double;
#define FAST ios_base::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for (int i = a; i < b; i++) //<, not <=!
#define F0R(i, b) for (int i = 0; i < b; i++)
typedef long long ll;

using namespace std;

int main(){
	FAST;
    int w; cin >> w;
    if(w > 2){
        if(w % 2 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
	}
    else
    cout << "NO" << "\n";
    return 0;
}
