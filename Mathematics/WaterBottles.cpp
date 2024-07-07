// https://leetcode.com/problems/water-bottles/description/?envType=daily-question&envId=2024-07-07

class Solution {
public:
    int numWaterBottles(int bottles, int exchange) {
        
        int total=bottles;
        while(bottles>=exchange)
        {
            total+=bottles/exchange;
            bottles=(bottles/exchange)+(bottles%exchange);
        }
        return total;
    }
};
