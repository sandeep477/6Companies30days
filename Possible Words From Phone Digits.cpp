Problem Link :https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/#

void possibleWordsUtil(int a[],int N,unordered_map<int,string>mp,vector<string>&ans,string temp,int i)
    {
        if(N==i)
        {
            ans.push_back(temp);return;
        }
        string cal_string = mp[a[i]];
        
        for(auto &it:cal_string)
        {
            possibleWordsUtil(a,N,mp,ans,temp+it,i+1);
        }
        
    }
    vector<string> possibleWords(int a[], int N)
    {
        unordered_map<int,string>phone;
        phone[2]="abc";
        phone[3]="def";
        phone[4]=("ghi");
        phone[5]=("jkl");
        phone[6]=("mno");
        phone[7]=("pqrs");
        phone[8]=("tuv");
        phone[9]=("wxyz");
        vector<string>ans;
        string temp="";
        int i=0;
        possibleWordsUtil(a,N,phone,ans,temp,i);
        return ans;
        
        
    }
