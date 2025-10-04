class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
    int n = arrivals.size();
        vector<int> check(n+1,0);
        unordered_map<int,int> s;
        int d = 0;

        for(int i = 0;i<n;i++){

            if(i-w >= 0 && check[i-w]){
                int x = arrivals[i-w];
                if(--s[x] == 0) s.erase(x);
            }

            int x = arrivals[i];

            if(s[x] < m){
                s[x]++;
                check[i] = 1;
            }else{
                d++;
            }
        }
        return d;
    }
};
