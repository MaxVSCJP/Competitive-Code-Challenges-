class Solution {
public:
    bool isPalindrome(int x) {
        long int counter=0, palinum, num = x;
        if(x < 0)
            return false;
        else {
            while(x / 10 != 0){ 
                counter++;
                x = x / 10;
            }
            x = num;
            palinum = x % 10;
            x /= 10;
            while(counter!=0){ 
                palinum = palinum * 10 + (x % 10);
                x /= 10;
                counter--;
            }
        }
        return palinum == num? true:false;
        

    }
};