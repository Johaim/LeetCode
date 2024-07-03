class Solution {
public:
    bool isPalindrome(int x) {
        bool ispalidroMe=false;
         int remainder=0, num=x;
         long target=0;
        if(x<0)
            ispalidroMe=false;
        else if(x<10)
            ispalidroMe=true;
        else{
            while(num>0){
                remainder=num%10;
                target+=remainder;
                num=(num-remainder)/10;
                target*=10;
                if(num<10)
                {
                    target+=num;
                    break;
                }
            }

        }
        if(x==target)
            ispalidroMe=true;
        return ispalidroMe;    
    }
};