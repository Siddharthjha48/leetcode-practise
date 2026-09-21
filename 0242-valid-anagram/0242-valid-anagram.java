class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> mp = new HashMap<>() ;
        
        for(char ch: s.toCharArray()){
            mp.put(ch,mp.getOrDefault(ch,0)+1) ;

        }

        if(s.length() != t.length()){ 
            return false ;
        }
        for(char ch : t.toCharArray()){

            

            if(!mp.containsKey(ch) || mp.get(ch) == 0){
                return false ;
            }
            if(mp.containsKey(ch)){
              mp.put(ch,mp.get(ch)-1) ;
            }
        }
        return true ;
    }
}