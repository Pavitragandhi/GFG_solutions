//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  string result = "";
  int n = src.size();
  int count = 1;
  
  for(int i = 0; i<n; i++){
      if(i == n-1){
          if(src[i] == src[i-1]){
              result += src[i];
              result += count + '0';
              break;
          }
          else{
              result += src[i];
              result += '1';
              break;
          }
      }
      if(src[i] == src[i+1]){
          count++;
      }
      else{
          result += src[i];
          result += count + '0';
          count = 1;
      }
  }
  return result;
  
}     
 
