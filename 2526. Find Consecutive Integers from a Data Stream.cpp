class DataStream {
public:
    int val, k,count=0;
    DataStream(int value, int k) {
        this->k=k;
        val=value;
    }
    bool consec(int num) {
        (num!=val) ?count=0:++count;
        return (count>=k) ? true: false;     
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */