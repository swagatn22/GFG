https://leetcode.com/problems/word-ladder/
class Solution {
public:
    int ladderLength(string a, string b, vector<string>& c) {
        if(a == b) return 0;
        unordered_set < string > dict;
        for(string s : c) dict.insert(s);
        queue<pair<string,int>> q;
        q.push({a,1});
        while(!q.empty() ){
            string curr = q.front().first;
            int count = q.front().second;
            q.pop();
            if(curr == b) return count;
            for(int i = 0; i < curr.length(); i++){
                string temp = curr;
                for(char c = 'a'; c <= 'z'; c++){
                    curr[i] = c;
                    if( dict.find(curr) != dict.end() ){
                        q.push ( {curr,count+1} );
                        dict.erase(curr);
                    }
                    curr = temp;
                }
            }
        }
        return 0;
    }
};
