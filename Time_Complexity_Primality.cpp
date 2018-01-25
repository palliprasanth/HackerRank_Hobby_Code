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

int main(){
	int p;
	cin >> p;
	for(int a0 = 0; a0 < p; a0++){
		int n;
		cin >> n;

		if (n <= 1){
			cout << "Not prime" << endl;
			continue;
		}

		int m = (int)sqrt(n);
		bool exit_flag = false;

		for (int i=2; i<=m; ++i){
			if(exit_flag)
				continue;
			if(n%i == 0){
				cout << "Not prime" << endl;
				exit_flag = true;
				continue;
			}
		}

		if(exit_flag)
			continue;

		cout << "Prime" << endl;
	}


	return 0;
}