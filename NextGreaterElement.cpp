class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> v(n);
        stack<long long> s;
        v[n-1]=-1;
        s.push(arr[n-1]);
        for(int i=n-2;i>=0;i--){
            if(arr[i]<s.top()){
                v[i]=s.top();
                s.push(arr[i]);
            }
            else{
                while(!s.empty() && arr[i]>s.top()){
                    s.pop();
                }
                if(s.empty()){
                    v[i]=-1;
                    s.push(arr[i]);
                }
                else{
                    v[i]=s.top();
                    s.push(arr[i]);
                }
            }
        }
        return v;
    }
};
