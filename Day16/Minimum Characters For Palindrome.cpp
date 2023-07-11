#include <bits/stdc++.h>
int minCharsforPalindrome(string str) {
	string s = str;
	reverse(s.begin(), s.end());
    s = str + '#' + s;
    int n = s.size();
    int lps[n];
    int res = 0;
    memset(lps, 0, sizeof(lps));
    for(int i = 1; i < n; i++){
        int x = lps[i-1];
        while(x > 0 and s[i] != s[x]) x = lps[x-1];
        if(s[i] == s[x]) x++;
        lps[i] = x;
    }
	return str.size() - lps[n-1];
}
