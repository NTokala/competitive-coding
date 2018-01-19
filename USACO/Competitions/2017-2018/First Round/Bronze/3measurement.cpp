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
//used to sort logs by day 
bool acompare(Entry a, Entry b) { return a.day < b.day; }
//who has the highest production rate 
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
  //We will literally compare the previous board to the new board each time we iterate over a new log entry. 
  F0R(i, N){
    vector<string> oldMoney;
   	vector<string> newMoney;
    //Create the old board
   	int highMilk = moneyMaker(cowGods);
   	for(auto i = cowGods.begin(); i != cowGods.end(); i++){
   		if(i -> second == highMilk)
   			oldMoney.push_back(i -> first);
   	}
    //read log
   	cowGods[log[i].name] += log[i].gain;
    //Create the new board
   	highMilk = moneyMaker(cowGods);
   	for(auto i = cowGods.begin(); i != cowGods.end(); i++){
   		if(i -> second == highMilk)
   			newMoney.push_back(i -> first);
   	}
    //Sorting is not necessary; the names are added to the list in the same order!
   	if(oldMoney != newMoney)
   		++count;
  }
   cout << count << "\n";
   return 0;
}

