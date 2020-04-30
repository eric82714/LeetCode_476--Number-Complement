class Solution {
public:
    int findComplement(int num) {
        int result = 0, degree = 0;
        
        while(num > 0) {
            result = pow(2, degree) * (1 - num % 2) + result;
            degree ++;
            num = num / 2;            
        }
        
        return result;
    }
};
