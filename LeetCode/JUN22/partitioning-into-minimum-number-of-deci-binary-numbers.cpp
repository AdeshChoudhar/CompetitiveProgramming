//
// Created by adeshchoudhar on 27/06/22.
//

class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for (char x: n) {
            ans = max(ans, x - '0');
        }
        return ans;
    }
};
