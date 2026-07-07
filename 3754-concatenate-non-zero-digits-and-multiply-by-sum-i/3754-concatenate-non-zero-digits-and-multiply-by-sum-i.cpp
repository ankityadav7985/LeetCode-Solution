class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
      string s="";
        while(n){
            int digit=n%10;
            if(n%10!=0){
                sum+=digit;
              s += (digit + '0');
            }
            n/=10;
            
        }
        reverse(s.begin(),s.end());
        int res=s.empty()?0:stoi(s);
      return 1LL * sum * res;
    }
};