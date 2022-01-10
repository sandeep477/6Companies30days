Problem Link: https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/

class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	     list<int>* adj;
	     adj = new list<int>[N];
	    for(int i=0;i<prerequisites.size();i++)
	    {
	        adj[prerequisites[i].first].push_back(prerequisites[i].second);
	    }
	    int count_visited_node =0;
	    
	    queue<int>q;
	    vector<int>indegree(N,0);
	    
	    for(int i=0;i<prerequisites.size();i++)
	    {
	        indegree[prerequisites[i].second]++;
	    }
	    for(int i=0;i<N;i++)
	    {
	        if(indegree[i]==0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int temp = q.front();
	        q.pop();
	        count_visited_node++;
	        for(auto i=adj[temp].begin();i!=adj[temp].end();i++)
	        {
	            indegree[*i]--;
	            if(indegree[*i]==0)
	            {
	                q.push(*i);
	            }
	        }
	    }
	    if(count_visited_node != N)return false;
	    return true;
	}
};
