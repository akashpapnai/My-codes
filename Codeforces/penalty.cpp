#include<bits/stdc++.h>
#define send {ios::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
using namespace std;
typedef long long ll;
class Solution {
	int mod = 1e9+7;

	public:
	void panelty() {
		string s; cin>>s;
		int ans = 9;
		
		{ // let say a wins then what will be ans?
			int counta = 0, countb = 0; // goals scoared by 'a' and goals scored by 'b'
			for (int i = 0; i < 10; ++i) {
				if (i % 2 == 0) counta += s[i] != '0'; // ? replaces with 1 when when it's 'a' turn
				else countb += s[i] == '1';  // otherwise ? replaces with 0 when it's 'b' turn 
				if (counta > countb + (10 - i)/*remaining goals*/ / 2) ans = min(ans, i);
				if (countb > counta + (9 - i)/*remaining goals*/ / 2) ans = min(ans, i);
			}
		}
		
		{ // let say b wins then what will be ans?
			int counta = 0, countb = 0;
			for (int i = 0; i < 10; ++i) {
				if (i % 2 == 0) counta += s[i] == '1'; 
				else countb += s[i] != '0'; // ? replaces with 1 when it's 'b' turn
				if (counta > countb + (10 - i)/*remaining goals*/ / 2) ans = min(ans, i);
				if (countb > counta + (9 - i) / 2)/*remaining goals*/ ans = min(ans, i);
			}
		}
		
		cout << ans + 1 << '\n';
	}
};
int main() {
	send help
	int t; cin>>t;
	while(t--){
		Solution s;
		s.panelty();
	}
}