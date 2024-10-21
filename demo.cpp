class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int max1=-1;
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count++;
            }

        }
        max1=max(count,max1); 
        int v=0;
        for(int i=k;i<s.size();i++)
        {
             if(s[v]=='a' || s[v]=='e' || s[v]=='i' || s[v]=='o' || s[v]=='u')
            {
                count--;
            }
            v++;
             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count++;
            }
            max1=max(count,max1);          
        }   
        return max1;
    }
};
