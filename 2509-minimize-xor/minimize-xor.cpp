class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int count1 = __builtin_popcount(num1);
        int count2 = __builtin_popcount(num2);

        while (count1 > count2) {
            num1 &= (num1 - 1);
            --count1;
        }

        while (count1 < count2) {
            num1 |= (num1 + 1);
            ++count1;
        }

        return num1;
    }
};