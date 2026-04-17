class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int onedelete = 0,res=arr[0];
        int nodelete = arr[0];

        for(int i=1;i<arr.size();i++){
            onedelete = max(onedelete+arr[i],nodelete);
           nodelete = max(nodelete+arr[i],arr[i]);

            res = max(res,max(nodelete,onedelete));



        }
        return res ;
        
    }
};