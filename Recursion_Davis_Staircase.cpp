#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> precompute(37);

int davis_staircase(int rem){
	
	if (rem == 0)
		return 1;
	
	if (rem < 0)
		return 0;
	
	if (precompute.at(rem) != 0)
		return precompute.at(rem);
	
	precompute.at(rem) = davis_staircase(rem-1) + davis_staircase(rem-2) + davis_staircase(rem-3);
	
	return precompute.at(rem);
}


int main(){
	int s;
	cin >> s;
	for(int a0 = 0; a0 < s; a0++){
		int n;
		cin >> n;
		cout << davis_staircase(n) << endl;
	}
	
	return 0;
}
