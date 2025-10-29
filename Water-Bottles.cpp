class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;  // total bottles drunk
        int empty = numBottles;  // empty bottles available

        while (empty >= numExchange) {
            int newBottles = empty / numExchange;  // bottles gained from exchange
            total += newBottles;                   // drink them
            empty = empty % numExchange + newBottles; // remaining empties + new empties
        }

        return total;
    }
};
