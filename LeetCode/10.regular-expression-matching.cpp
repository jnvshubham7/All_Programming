class Solution {
public:
  bool rec(const string& s, const string& p, int sIndex, int pIndex) {
    // Base case: If both strings are empty, they match.
    if (sIndex == s.length() && pIndex == p.length()) {
        return true;
    }

    // If the pattern is exhausted but the string is not, they don't match.
    if (pIndex == p.length()) {
        return false;
    }

    if(s[sIndex] == p[pIndex] ) {

      rec(s, p, sIndex + 1, pIndex + 1);
    }

    if(p[pIndex] == '.') {
      rec(s, p, sIndex + 1, pIndex + 1);
    }

    if(p[pIndex] == '*') {
      rec(s, p, sIndex, pIndex + 1);
      rec(s, p, sIndex + 1, pIndex);
    }

    return false;

   
}

bool isMatch(const string& s, const string& p) {
    return rec(s, p, 0, 0);
}

};