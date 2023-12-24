class Solution {
public:
     int maxSubArray(vector<int>& arr) {
        int n=arr.size();

        int maxi=arr[0];
          int sum=arr[0];

        for(int i=1;i<n;i++){
           if(sum<0)
           sum=arr[i];

           else 
           sum+=arr[i];
           
           maxi=max(sum,maxi);
        }
        return maxi;
    }
};
