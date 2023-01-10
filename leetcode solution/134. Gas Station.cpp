class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas= 0;
        int total_cost=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
            total_cost+=cost[i];
        }
        if(total_gas<total_cost){
            return -1;
        }
    int current_fuel=0;
    int current_pos=0;
        for(int i=0;i<gas.size();i++){
            current_fuel+= (gas[i]-cost[i]);
            cout<<current_fuel<<"- "<<i<<"e"<<current_pos<<endl;
            if(current_fuel<0){
                current_fuel=0;
                current_pos=i+1;
            }
                        cout<<current_fuel<<"- "<<i<<"e"<<current_pos<<endl;
        }
        return current_pos;
    }
};