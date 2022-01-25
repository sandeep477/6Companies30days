void find_permutate_util(int i,string S,vector<string>&ans,int n)
	{
	    if(i==n){
	        ans.push_back(S);return;
	    }
	    for(int j=i;j<S.length();j++)
	    {
	        swap(S[i],S[j]);
	        find_permutate_util(i+1,S,ans,n);
	        swap(S[i],S[j]);
	    }
	    
	}
		vector<string>find_permutation(string S)
		{
		    vector<string>ans;
		    string temp="";
		    find_permutate_util(0,S,ans,S.length());
		    sort(ans.begin(),ans.end());
		    return ans;
		}
