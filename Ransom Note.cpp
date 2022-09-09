 bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for (auto i : magazine) mp[i]++;
        
        for (auto i : ransomNote)
        {
            if (mp[i] > 0) mp[i]--;
            else return false;
        }
        return true;
    }
