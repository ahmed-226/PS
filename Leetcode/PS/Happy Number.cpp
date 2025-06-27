class Solution {
public:
    bool isHappy(int n) {
        // if(n==1 || n==7) return true;
        // else if(n<10) return false;
        // else{
        //     int sum=0;
        //     while(n>0){
        //         int temp=n%10;
        //         sum+= temp*temp;
        //         n=n/10;
        //     }
        //     return isHappy(sum);
        // }

        unordered_set<int> seen;
        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;
        }
        return n == 1;

    }
};