class Solution {
public:
    void merge(vector<int>& arr, int m, vector<int>& brr, int n) {
        int idx= m+n-1;
        int i = m-1;
        int j = n-1;
        while(i>=0&&j>=0){
            if(arr[i]>=brr[j]){
                arr[idx--]=arr[i--];

            }
            else{
                arr[idx--]=brr[j--];
            }
        }
        while(j>=0){
            arr[idx--]=brr[j--];
        }

        
    }
};