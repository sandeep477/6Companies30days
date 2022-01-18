Problem Link :https://docs.google.com/document/d/1sSyOTeZBVJExf0oytLVGk6Z34h1usFm4QRkr1Wb5ouk/edit

vector<string> generate(int N)
{
	vector<string>ans;
	ans.push_back("1");
	if(N==1)return ans;
	ans.push_back("10");
	if(N==2)return ans;
	ans.push_back("11");
	if(N==3)return ans;
	
	for(int i=4;i<=N;i++)
	{
	    int carry=1;
	    int n = ans[i-2].size();
	    string temp_helper = ans[i-2];
	    string temp = "";
	    while(n>0)
	    {
	        int digit = temp_helper[n-1]-'0';
	       int  sum = carry +digit;
	        carry = (sum==2)?1:0;
	        digit = sum%2;
            temp.push_back(digit+'0');
	        n--;
	    }
	    if(carry==1)
	    {
	        temp.push_back('1');
	    }
	    reverse(temp.begin(),temp.end());
	    ans.push_back(temp);
	}
	return ans;
}
