class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n= x;
        
        long long num =0;
        while(n>0){
             int rem =n%10;
            num=num*10+rem;
            n=n/10;

        }
        if(num==x){
            return true;
        }
        return false;
    }
};