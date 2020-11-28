#include<iostream>
#include <string>// for lexical_cast() 
#include<algorithm>
#include<stack>
using namespace std;
string nextsimilarnumber(string A) {
    int n = A.size();
    stack<int> st;
    st.push(n-1);

    int i = n-1;

    while(!st.empty()  &&  --i >= 0){
        if(A[st.top()] > A[i]){
            int r;
            while(!st.empty() && A[st.top()] > A[i]){
                r = st.top();
                st.pop();
            }
            swap(A[i], A[r]);
            sort(A.begin()+i+1, A.end());
            return A;
        }
        st.push(i);
    }
    return "-1";
}
int main() {
    string A;
    cin>>A;
    cout<<nextsimilarnumber(A)<<endl;
}