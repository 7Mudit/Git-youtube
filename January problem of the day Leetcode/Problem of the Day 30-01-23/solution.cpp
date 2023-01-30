class Solution {
public:
    int tribonacci(int n) {
        // first number = 0. second number =1 third number =1 fourth number =1

        // base case
        if(n == 0 || n == 1)
            return n;
        if(n == 2)
            return 1;

        int firstNumber = 0;
        int secondNumber = 1 ;
        int thirdNumber = 1;

        for(int i = 3 ; i <= n ; i++){
            int fourthNumber = firstNumber + secondNumber + thirdNumber;
            firstNumber = secondNumber;
            secondNumber = thirdNumber;
            thirdNumber = fourthNumber;
        }
        return thirdNumber;
        
    }
};

