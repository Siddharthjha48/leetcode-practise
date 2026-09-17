class Solution {
    public boolean wordPattern(String pattern, String s) {
        HashMap<Character, String> mp = new HashMap<> () ;
        HashMap<String, Character> mpp = new HashMap<> () ;
        String[] w = s.split(" ");

        for(int i=0;i<pattern.length();i++){
            char ch1 = pattern.charAt(i) ;
            String words = w[i] ;
            if(pattern.length() != w.length){
            return false;
        }



            if(mp.containsKey(ch1) && !mp.get(ch1).equals(words)){
                return false ;
            }
            if(mpp.containsKey(words) && mpp.get(words) != ch1){
                return false ;
            }


            mp.put(ch1,words) ;
            mpp.put(words,ch1) ;



        }
        return true ;
        
    }
}