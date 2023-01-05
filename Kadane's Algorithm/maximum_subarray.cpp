// find the largest sum contagious subarray

#include<iostream>
using namespace std;
// 	• Initialize two variables curr_sum=0 and max_sum=INT_MIN
// 	• Loop for each element of given array-
// 		a. curr_sum = arr[i] + curr_sum
// 		b. If (curr_sum > max_sum)
// 			max_sum=curr_sum
// 		c. If(curr_sum < 0)
// 			Curr_sum=0
//    Return max_sum


int kadane(int  arr[],int n){
    int curr_sum=0, max_sum=INT_MIN;

    for(int i = 0; i < n;i++ ){
        // curr_sum += arr[i];
        curr_sum = curr_sum + arr[i];

        //updating our maximum sum in every iteration
        max_sum = max(max_sum , curr_sum);
        // if(curr_sum > max_sum)
        //     max_sum = curr_sum;


        // for handling negative values
        if(curr_sum <  0)
            curr_sum = 0;        
    }

    return max_sum;
}

int main(){

    int arr[]={-2,1,-3,4,-1,2,1,-5,4};

    int n=sizeof(arr)/sizeof(arr[0]);

    int ans=kadane(arr,n);

   cout<< ans <<endl;


}