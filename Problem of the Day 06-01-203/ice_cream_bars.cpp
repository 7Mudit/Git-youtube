// minimum ice cream bars
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {

        // sorting ice creams according to their price
        sort(costs.begin(), costs.end());

        // price of first ice cream would be minimum as we have already sorted the price of ice cream
        // if money with us is less than least ice cream price then return 0
        if (coins < costs[0])
            return 0;

        // variable to store the number of ice creams boy can buy
        int cnt = 0;


        for (int i = 0; i < costs.size(); i++)
        {
            // if money present with us is greater than or equal to  the price of  ice cream
            // increase the count of ice cream bought and decrement our money by price of ice cream
            if (coins >= costs[i])
            {
                coins -= costs[i];
                cnt++;
            }
            //we do not have money to buy the ice cream return the answer
            else
                return cnt;
        }

        //returning the number of ice creams bought with coins
        return cnt;
    }
};