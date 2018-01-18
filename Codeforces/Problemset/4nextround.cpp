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
#define FOR(i,a,b) for (int i = a; i < b; ++i) //<, not <=!
#define F0R(i, b) for (int i = 0; i < b; ++i)
typedef long long ll;

using namespace std;

int main(){
  FAST;
  int n, k; cin >> n >> k;
  int scores[n]; 
  //fill array
  F0R(i ,n){
    int aTemp; cin >> aTemp;
    scores[i] = aTemp;
  }
  int scoreK = scores[k -1];
  int count = 0;
  F0R(j, n){
    if(scores[j] < scoreK || scores[j] < 1)
      break;
    ++count;
  }
  cout << count << "\n";
  return 0;
}
