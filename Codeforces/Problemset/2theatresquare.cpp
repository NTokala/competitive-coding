 /*
    Author: ntokala/sleepyd3v
*/
#include <iostream>
#include <math.h>
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
  ll n, m, a; cin >> n >> m >> a;
  ll s1 = ceil((double)n/a);
  ll s2 = ceil((double)m/a);
  cout << s1 * s2  << "\n";
  return 0;
}
