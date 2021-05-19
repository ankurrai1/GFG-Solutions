class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int mid = sizeOfStack & 1 ? (sizeOfStack / 2 ) + 1 : (sizeOfStack / 2 );
        if(s.size() == mid ){
            s.pop();
            return;
        }

        int ele = s.top();
        s.pop();
        deleteMid(s,sizeOfStack);
        s.push(ele);
    }
};
