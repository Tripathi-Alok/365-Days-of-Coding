class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length()==1) return true;
        
        if(word[0]>=97 && word[0]<=122){
            for(int i=1;i<word.length();i++){
                if(word[i]<97) return false;
            }
        }
        else if(word[0]>=65 && word[0]<=90){
            if(word[1]>=97){
                for(int i=1;i<word.length();i++){
                    if(word[i]<97) return false;
                }
            }
            else{
                for(int i=1;i<word.length();i++){
                    if(word[i]>90) return false;
                }
            }
        }
        return true;
    }
};
