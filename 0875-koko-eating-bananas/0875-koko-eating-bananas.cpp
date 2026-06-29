class Solution {
public:

        int findLargest(vector<int> &piles){
            int n = piles.size();
            int maxi = INT_MIN ;

            for(int i=0;i<n;i++){
                if(piles[i] > maxi){
                    maxi = piles[i];
                }
            }
            return maxi ;
        }

        //it eill give me time for koko to eat all bananas
        long long calculateHours(vector<int> &piles ,int k){
            long long totalhours =0;

            for(int i=0;i<piles.size();i++){
                totalhours += ceil((double)piles[i] / k) ;
            }
            return totalhours ;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findLargest(piles) ;

        while(low<=high){
            int mid = (low+high)/2 ;
            long long totalhours = calculateHours(piles,mid);
            if (totalhours <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;

        }
        
    
};