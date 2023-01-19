class DataStream {

public:
    //defining class's data members
    int value;
    int k;
    //defining integer stream
    vector<int> integerStream;
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
    }
    
    bool consec(int num) {
        // if value is same value of our object then push it into our integer stream
        if(num == value)
            integerStream.push_back(num);
        // if not same value then clear previous values in integer stream and return false
        else{
            integerStream.clear();
            return false;
        }
        // if we have parsed our value k times or more than that then return true
        if(integerStream.size() >= k)
            return true;
        
        // return false if neither of above case matches
        return false;
            
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */