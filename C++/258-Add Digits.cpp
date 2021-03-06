/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?
**/

// Method 1
class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;
        
        int temp = 0;
        while(num > 0){
            temp += num % 10;
            num /= 10;
        }
        return addDigits(temp);
    }
};

// Method 2 ============================》good
class Solution {
public:
    int addDigits(int num) {
        // if( num == 0  ) return 0;
        // int result = num%9;
        // return result ==  0 ? 9 : result;
        return (num - 1) % 9 + 1;
    }
};