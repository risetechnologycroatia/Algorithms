#include <bits/stdc++.h>
using namespace std;

int main() {

	int w;
	cin >> w;
	
		if(w%2==0) {
			int res = w / 2;
			if(res == 1) {
				cout << "NO\n";
			} else {
				cout << "YES\n";
			}

		} else {
			cout << "NO\n";
		}
	}
