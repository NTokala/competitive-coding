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

int main(){
	ifstream cin ("shuffle.in");
    ofstream cout ("shuffle.out");
	int N; cin >> N;
    int guide[N]; //guide of a_1, ... a_n
    //To actually use these as indeces, we must subtract 1 from each value! 
    F0R(i,N){
        cin >> guide[i];
        guide[i] -= 1;
    }
    vector<int> id;
    F0R(i, N){
        int xid; cin >> xid;
        id.push_back(xid);
    }
    F0R(i, 3){
        vector<int> tempID;
        F0R(j, N){
            tempID.push_back(id[guide[j]]);
        }  
        id.clear();
        id = tempID;
    }
    F0R(k, N){
        cout << id[k] << "\n";
    }
    return 0;
}


