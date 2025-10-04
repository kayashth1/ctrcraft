class Solution {
public:
    bool doesAliceWin(string s) {
        int n = s.length();
        string str = "aeiou";
        int cnt = 0;
        int num = 0;
        bool flag = 0; // alice
        for(int i = 0;i<n;i++){
            if(str.find(s[i]) != string::npos){
                cnt++;
            }
        }
        if(cnt == 0) return 0;
        // if( cnt == 1 || cnt % 2 == 0) return 1;
        return 1;
    }
};
