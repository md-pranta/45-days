       unordered_map <char, int> mp;
       if (s.size()<3) return 0;
       for (int i;i<3;i++){
           mp[s[i]] += 1;
       }
       int result = 0;
        if (mp.size() == 3) result += 1;
       for(int i=3;i<s.size();i++){
        mp[s[i-3]] -= 1;
        if (mp[s[i-3]]==0) mp.erase(s[i-3]);
        mp[s[i]] += 1;
           if (mp.size() == 3){
               result += 1;
           }

       }
       return result;