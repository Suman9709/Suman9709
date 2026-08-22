class Solution {
public:
    double myPow(double x, int n) {
       double ans = 1.0;
       long long int temp = n;

      while(temp < 0){
        temp = -1*temp;
      }

        while(temp){
            if(temp%2 == 1){
                ans = ans*x;
                temp = temp-1;
            }
            else{
                x=x*x;
                temp = temp/2;

            }
        }
        if(n<0){
            return 1.0/ans;
        }
        else{
            return ans;
        }
    }
};
