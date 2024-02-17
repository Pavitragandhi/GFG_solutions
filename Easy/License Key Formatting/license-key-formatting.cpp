//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution
{
   public:
    string ReFormatString(string S, int K){
    	int n = S.size();
    	string result = "";
    	
    	for(int i = 0; i<n; i++){
    	    if(S[i] != '-'){
    	        result += toupper(S[i]);
    	    }
    	}
    	
    	int count = 0;
    	int m = result.size();
    	string answer = "";
    	
    	for(int i = m-1; i>=0; i--){
    	    if(count == K){
    	        count = 0;
    	        answer += '-';
    	    }
    	    answer += result[i];
    	    count++;
    	}
    	reverse(answer.begin() , answer.end());
    	return answer;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    cin>>S;
	    int K;
	    cin >> K;
	    Solution ob;  
	    string ans=ob.ReFormatString(S, K);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends