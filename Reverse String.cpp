class Solution {
public:
    void reverseString(vector<char>& s) {
     int n=s.size();
        char c;
         for(int i=0,j=n-1;i<=n/2,j>=n/2;i++,j--)
         {
             c=s[i];
             s[i]=s[j];
             s[j]=c;
         }
     
    }
};
