//Input: n = 25   Output: 52  Explanation: Reverse of 25 is 52.
class Solution {
public:
    int reverseNumber(int n) {
        if(n == 0){
            return 1;
        }

        int revnum = 0;
        while( n!= 0){
            int id = n % 10;
            revnum = (revnum *10) + id;
            n = n / 10;
        }
        return revnum;
    }
};
