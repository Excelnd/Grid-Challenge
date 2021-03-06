// Grid Challenge.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string isLexicographicalSortPossible(vector<string> &rows) {
	int n = rows.size();
	for (int i = 0; i < n; i++) {
		sort(rows[i].begin(), rows[i].end());
	}

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (rows[i][j] > rows[i + 1][j]) return "NO";

		}
	}
	return "YES";
}

int main()
{
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<string> rows(n);
		for (int i = 0; i < n; i++) {
			cin >> rows[i];
		}
		cout << isLexicographicalSortPossible(rows) << endl;
	}

    return 0;
}

