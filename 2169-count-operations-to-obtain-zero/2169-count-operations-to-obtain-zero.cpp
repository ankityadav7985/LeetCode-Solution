class Solution {
public:
int ans=0;
int solve(int num1,int num2,int count){
if(num1<=0||num2<=0)return count;
if(num1>=num2){
     ans=solve(num1-num2,num2,count+1);
}
else
    ans=solve(num1,num2-num1,count+1);
return ans;
}
    int countOperations(int num1, int num2) {
        return solve(num1,num2,0); 
    }
};