class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)return 1;

        int ans=10,product=9,availabledigits=9;

        while(n-->1 && availabledigits>0){
            product*=availabledigits--;
            ans+=product;
        }

        return ans;
        
    }
};