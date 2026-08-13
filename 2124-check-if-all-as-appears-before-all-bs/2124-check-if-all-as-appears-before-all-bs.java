class Solution {
    public boolean checkString(String s) {
        int maxia = -1;
        int minib = Integer.MAX_VALUE;
        int n = s.length();

        for(int i = 0; i<n ; i++){
            if(s.charAt(i) == 'b') minib = Math.min(minib , i);
            else maxia = Math.max(maxia, i);
        }
        return maxia < minib;
    }
}