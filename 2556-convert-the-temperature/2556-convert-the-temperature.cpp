class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> store;
        store.push_back(celsius + 273.15);
        double fr = celsius * 1.80 + 32.00;
        store.push_back(fr);
        return store;

    }
};