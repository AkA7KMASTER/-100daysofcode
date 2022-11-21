//Given an integer array and another integer element. The task is to find if the given element is present in array or not.


//============================================================================================================//

class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        for(int a=0;a<N;a++)
        {
            if(arr[a]==X)
            {
                return a;
            }
           
        }
       
              return -1;
            
        
    }

};

//===============================================================================//


/*

Input:
n = 5
arr[] = {1,2,3,4,5}
x = 5
Output: 4
Explanation: For array elements 
{1,2,3,4,5} element to be searched 
is 5 and it is at index 4. So, the 
output is 4.


*/