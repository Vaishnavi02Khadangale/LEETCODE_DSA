class Solution {
public:

    bool isFreqSame(int freq1[] , int freq2[]){ // for 26 cchar O(1)
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for(int i=0; i<s1.length(); i++){
            freq[s1[i] - 'a']++; // int idx = s1[i] - 'a'; freq[idx]++;
        }
        
        int windowSize = s1.length();
        for(int i = 0; i < s2.length(); i++){
            int Windowfreq[26] = {0};
            int windowIndex = 0, idx = i;
            
            while(windowIndex < windowSize && idx < s2.length()){
                // FIXED: Changed s2[idx - 'a'] to s2[idx] - 'a'
                Windowfreq[s2[idx] - 'a']++; 
                windowIndex++; 
                idx++;
            }
            
            if(isFreqSame(freq, Windowfreq)){ // found
                return true;
            }
        }
        return false;
    }
};
