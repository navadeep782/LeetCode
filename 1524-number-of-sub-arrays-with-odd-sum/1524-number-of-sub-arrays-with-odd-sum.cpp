class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        int n=arr.size();
        long long prefix=0;

        

        long long even=1;//ps starts with 0;
        long long odd=0;
       

        const int MOD=(1e9+7);
        for(int x:arr)
        {
            prefix +=x;
            if(prefix%2==0){

                even++;
            }
            else{

                odd++;
            }
        }

        return (odd*even)%MOD;
    
    }
};