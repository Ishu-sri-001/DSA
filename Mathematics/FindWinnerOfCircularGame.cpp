// https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
// Solved using Josephus problem

class Solution {
public:
    int findTheWinner(int n, int k) {
        int win=0;
        for (int i=1;i<=n;i++)
        {
            win=(win+k)%i;
        }
        return win+1;
    }
};
