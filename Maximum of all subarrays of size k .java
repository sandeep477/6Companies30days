Problem Link:https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

 //Function to find maximum of each subarray of size k.
    static ArrayList <Integer> max_of_subarrays(int arr[], int n, int k)
    {
        ArrayList<Integer>ans = new ArrayList<Integer>();
        PriorityQueue<Integer> q =new PriorityQueue<>((x, y) -> Integer.compare(y, x));
        for(int i=0;i<k;i++)
        {
            q.add(arr[i]);
        }
        ans.add(q.peek());
        
        for(int i=k;i<n;i++)
        {
            q.remove(arr[i-k]);
            q.add(arr[i]);
            ans.add(q.peek());
        }
        return ans;
    }
