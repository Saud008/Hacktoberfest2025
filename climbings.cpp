class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        //     for (int i = 0; i < n; i++) {
        //         for (int j = 0; j < n; j++) {
        //             if (i == j) {
        //                 continue;
        //             }
        //             if (nums[i] == nums[j]) {
        //                 return true;
        //             }
        //         }
        //     }
        //     return false;
        // }
     //tc=O(n^2),sc=O(1)   
        
        
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < n-1; i++) {
        //     if (nums[i] == nums[i + 1]) {
        //         return true;
        //     }
        // }
        // return false;
             //tc=O(nlogn),sc=O(1) 

         unordered_map<int,int> visited;
         for(int i=0;i<n;i++){
            if(visited[nums[i]]==1){
                return true;
            }
            else{
                visited[nums[i]]=1;
            }
         } 
         return false;
    }
};
