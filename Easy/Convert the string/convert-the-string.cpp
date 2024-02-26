//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform (string str);
   
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        string str;
        cin>>str;
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


string transform (string str)
{
    char s[] = {'a' , 'e' , 'i' , 'o' , 'u'};
    string store = "";
    
    for(char c : str){
        if(find(s , s+5 , tolower(c)) == s+5){
            if(isupper(c)){
                store += tolower(c);
            }
            else{
                store += toupper(c);
            }
        }
    }
    
    string result = "";
    for(int i = 0; i<store.size(); i++){
        result += '#';
        result += store[i];
    }
    
    if(result.empty()){
        return "-1";
    }
    return result;
}