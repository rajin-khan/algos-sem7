//this code solves the longest common subsequence problem dynamically.

#include <iostream>
#include <cstring>

using namespace std;

string lcs(string a, string b) {

    int m = a.length();
    int n = b.length();

    int table[m + 1][n + 1];

    memset(table, 0, sizeof(table));

    for (int i = 1; i <= m; i++) {

        for (int j = 1; j <= n; j++) {

            if (a[i - 1] == b[j - 1]) {

                table[i][j] = 1 + table[i - 1][j - 1]; // Dynamic programming step

            } 
            else {

                table[i][j] = max(table[i - 1][j], table[i][j - 1]); // Dynamic programming step

            }
        }
    }

    int i = m, j = n;
    string lcs = "";

    while (i > 0 && j > 0) {

        if (a[i - 1] == b[j - 1]) {

            lcs = a[i - 1] + lcs;
            i--, j--;
        } 
        else if (table[i - 1][j] > table[i][j - 1]) {

            i--;
        } 
        else {

            j--;
        }
    }

    return lcs;
}

int main() {

    string a = "XFGHSHTY";
    string b = "XGTY";

    string subsequence = lcs(a, b);

    cout << "Longest Common Subsequence: " << subsequence << endl;

    return 0;
}
