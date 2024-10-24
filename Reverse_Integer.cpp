class Solution {
public:
    int reverse(int x) {
        long long rev_num = 0;
        while(x != 0 ){
            rev_num = rev_num * 10 + x % 10; 
            x /= 10;
        }
        if (rev_num > INT_MAX || rev_num < INT_MIN) {
        return 0;
        }
        return (int)rev_num;
    }
};