/*
	Author: ntokala/sleepyd3v
*/
#include <bits/stdc++.h>

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

struct Board
{
	int x1, y1, x2, y2;
};
int blockedArea(Board u, Board t){
	int sideX = (u.x2 - u.x1) + (t.x2 - t.x1) - (max(u.x2, t.x2) - min(u.x1, t.x1));
	if(sideX <= 0) sideX = 0;
	int sideY = (u.y2 - u.y1) + (t.y2 - t.y1) - (max(u.y2, t.y2) - min(u.y1, t.y1));
	if(sideY <= 0) sideY = 0;
	return sideX * sideY;
}
int main(){
	//ifstream cin ("billboard.in");
   // ofstream cout ("billboard.out");
	Board a,b,truck;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;
	
	cout << ((a.x2 - a.x1)*(a.y2 - a.y1)) + ((b.x2 - b.x1)*(b.y2 - b.y1)) - blockedArea(a, truck) - blockedArea(b, truck);
	return 0;
}
