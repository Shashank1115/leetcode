class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int i = 0;
        while (i < fruits.size()) {
            bool found = false;
            for (int j = 0; j < baskets.size(); j++) {
                if (fruits[i] <= baskets[j]) {
                    fruits.erase(fruits.begin() + i);
                    baskets.erase(baskets.begin() + j);
                    found = true;
                    break;
                }
            }
            if (!found) i++;
        }
        return fruits.size();
    }
};