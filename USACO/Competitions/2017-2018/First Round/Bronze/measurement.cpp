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
#define FOR(i,a,b) for (int i = a; i < b; ++i) //<, not <=!
#define F0R(i, b) for (int i = 0; i < b; ++i)
typedef long long ll;

using namespace std;
struct Entry{
	int day;
	string name;
	int gain;
};
bool acompare(Entry a, Entry b) { return a.day < b.day; }
int moneyMaker(map<string, int> m){
	int max = 0;
	for(auto it = m.begin(); it != m.end(); it++){
		if(it -> second > max)
			max = it -> second;
	}
	return max;
}
int main(){
	ifstream cin ("measurement.in");
    ofstream cout ("measurement.out");
   	int count = 0;
   	int startM = 7;
   	int N; cin >> N;
   	vector<Entry> log;
   	F0R(i,N){
   		Entry temp;
   		cin >> temp.day >> temp.name >> temp.gain;
   		log.push_back(temp);
   	}
   	sort(log.begin(), log.end(), acompare);
   	//Now every entry is sorted by date!
   	//initialize "bank"
   	map<string, int> cowGods;
   	cowGods["Bessie"] = 7;
   	cowGods["Elsie"] = 7;
   	cowGods["Mildred"] = 7;
   	//now, let's modify the 'bank' and count changes on the board
   	F0R(i, N){
   		vector<string> oldMoney;
   		vector<string> newMoney;
   		int highMilk = moneyMaker(cowGods);
   		for(auto i = cowGods.begin(); i != cowGods.end(); i++){
   			if(i -> second == highMilk)
   				oldMoney.push_back(i -> first);
   		}
   		cowGods[log[i].name] += log[i].gain;
   		highMilk = moneyMaker(cowGods);
   		for(auto i = cowGods.begin(); i != cowGods.end(); i++){
   			if(i -> second == highMilk)
   				newMoney.push_back(i -> first);
   		}
   		if(oldMoney != newMoney)
   			++count;
   	}

   	cout << count << "\n";
   	return 0;
}

