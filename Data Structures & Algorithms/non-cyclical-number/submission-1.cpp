class Solution {
    private:
    int sumOfSquare(int n){
        int sum = 0;

        while(n>0){
            int rem = n%10;
            sum+=pow(rem, 2);
            n = n/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int>visit;

        while(visit.find(n) == visit.end()){
            visit.insert(n);
            n = sumOfSquare(n);
            if(n == 1)
            return true;
        }
       return false;
    }
};
