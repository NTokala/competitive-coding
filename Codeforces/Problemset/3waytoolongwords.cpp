/*
  Author: ntokala/sleepyd3v
*/
#include <iostream>
#include <string>
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
  int n; cin >> n;
  F0R(i, n){
    string s; cin >> s;
    if(s.length() >10)
      cout << s[0] << s.length() - 2 << s[s.length() -1] << "\n";
    else
      cout << s << "\n";
  }
  return 0;
}
