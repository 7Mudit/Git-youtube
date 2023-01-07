class Solution {
public:
// Time complexity:O(N)
// Space complexity:O(1)

    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {


        int curr_gas=0, starting_index=0, gas_cost=0, gas_available=0;

        for(int i=0 ; i<gas.size() ; i++){
            // total gas available 
            gas_available+=gas[i];
            // total gas used
            gas_cost+=cost[i];

            // check cost of gas needed to move to next station and add leftover gas from previous station
            curr_gas = curr_gas + gas[i] - cost[i];

            // if gas at index provided is less than cost needed to travel to next station then change starting index and make curr_gas to 0 as there is no point to store negative values
            if(curr_gas < 0){
                starting_index = i+1;
                curr_gas=0;
            }
        }
        
        // if total gas is less than gas used return -1
        if(gas_available < gas_cost)
            return -1;
        else
            return starting_index;



    }
};
