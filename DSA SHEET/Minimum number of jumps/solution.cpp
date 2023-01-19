class Solution{
  public:
    int minJumps(int arr[], int n){
        // if array consists of 1 element that means we are at the end of array no jumps required
        if(n<=1)
            return 0;
        // if first element of array is 0 that means we cannot jump to next element return -1
        if(arr[0]==0)
            return -1;


        int steps = 0, maxReach = 0, jump = 0;


        for (int i = 0; i < n - 1; i++) {
            //calculate max steps we can cover in one jump
            maxReach = max(maxReach, i + arr[i]);

            // if current point we are at is our maxReach and also we are not at end of array that means no solution exist return -1
            if(i>=maxReach)
                return -1;

            // if we have exhausted our steps that means we have to take jump and our steps change to new maxReach
            if (i == steps) {
                jump++;
                steps = maxReach;
            }
        }
        //return minimum number of jumps to reach the end of array
        return jump;
    }
};