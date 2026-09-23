class Solution {
public:
    bool isHappy(int n) {
        set<int> s;

        while (n != 1) {
            int sum = 0;

            while (n > 0) {
                int digit = n % 10;
                sum = sum + digit * digit;
                n = n / 10;
            }

            n = sum;

            if (s.count(n)) {
                return false;
            }

            s.insert(n);
        }

        return true;
    }
};

