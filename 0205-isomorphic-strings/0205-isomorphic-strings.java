class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character, Character> mp = new HashMap <>() ;
        HashMap<Character, Character> mpp = new HashMap <>() ;

        for(int i=0;i<s.length();i++){
            char ch1 = s.charAt(i) ;
            char ch2 = t.charAt(i) ;

            if(mp.containsKey(ch1) && mp.get(ch1) != ch2 ){
                return false ;
            }
            if(mpp.containsKey(ch2) && mpp.get(ch2) != ch1 ){
                return false ;
            }

            mp.put(ch1,ch2) ;
            mpp.put(ch2,ch1) ;
            



        }
        return true ;
        
    }
}