Problem Link: https://practice.geeksforgeeks.org/problems/phone-directory4628/1/#

vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
     vector<vector<string>>ans;
     int i=0,len = s.length();
     
     for(int i=0;i<len;i++)
     {
         string comp = s.substr(0,i+1);
         
         set<string>st;
         for(int k=0;k<n;k++)
         {
             string contactprefix = contact[k].substr(0,i+1);
             if(contactprefix == comp)st.insert(contact[k]);
         }
         if(st.size()==0)ans.push_back({"0"});
         else {
             
             vector<string>tempans(st.begin(),st.end());
             ans.push_back(tempans);}
     }
     return ans;
     
    }
