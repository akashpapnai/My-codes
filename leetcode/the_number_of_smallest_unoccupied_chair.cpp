// Problem Statement: https://leetcode.com/contest/biweekly-contest-57/problems/the-number-of-the-smallest-unoccupied-chair/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution {
	set<int> s;
   int ans[10005];
   pair<int,int> a[20005];

	public:

	int smallestChair(vector<vector<int>>& times, int targetFriend) {
		s.clear();
		int n=times.size(),i,m=0;
		for(i=0;i<n;i++)
		{
			a[i<<1]=make_pair(times[i][0],i+1);
			a[i<<1|1]=make_pair(times[i][1],-i-1);
		}
		sort(a,a+(n<<1));
		for(i=0;i<n<<1;i++)
			if(a[i].second<0) s.insert(ans[-a[i].second]);
			
			else if(s.empty()) ans[a[i].second]=m++;
			
			else {
				ans[a[i].second]=*s.begin();
				s.erase(s.begin());
			}
		return ans[targetFriend+1];
    }
	
};
int main() {
	set<int>s;
	s.insert(6);
	s.insert(5);
	int c = *(++s.begin());
	cout<<c<<endl;
}