/*
ID: nikhilt1
LANG: C++11
TASK: ride
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  ifstream cin ("ride.in");
  ofstream cout ("ride.out");
  
  string comet, group; cin >> comet >> group;
  int cVal = 1, gVal = 1;
  for(char i : cVal){
    cVal = (cVal * (i - 'A' + 1)) % 47;
  }
  for(char j : gVal){
    gVal = (gVal * (j - 'A' + 1)) % 47;
  }
  if (cVal == gVal)
    cout << "GO" << "\n";
  else
    cout << "STAY" << "\n";
  return 0;
}