class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       int i = 0, m = name.length(), n = typed.length();
        
        // Typed is smaller so we have some character(s) missing
        if (n < m) return false;
        
        for (int j = 0; j < typed.length(); j++ )
            if (name[i] == typed[j])
                i++;
            else if(j==0 or typed[j] != typed[j-1])
                return false;
            
        return i == m; //Reached end
    }
};