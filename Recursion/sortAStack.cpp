/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s
you are required to complete the below method */

void SortedStack :: sort()
{
    if(s.size() == 1) return;
    int ele = s.top();
    s.pop();
    sort();
    stack<int> st;
    while(!s.empty()){
        if(s.top() <= ele){
            s.push(ele);
            while(!st.empty()){
                s.push(st.top());
                st.pop();
            }
            return;
        }
        else{
            st.push(s.top());
            s.pop();
        }
    }
    s.push(ele);
    while(!st.empty()){
        s.push(st.top());
        st.pop();
    }
}

// doing recursive at on two functio gFg solutions

void sortedInsert(stack<int> &s, int x)
{
	if(s.empty() or x>s.top())
	{
		s.push(x);
		return;
	}
	int temp = s.top();
	s.pop();
	sortedInsert(s,x);
	s.push(temp);
}

void SortedStack :: sort()
{
	if(!s.empty())
	{
		int x = s.top();
		s.pop();
		sort();
		sortedInsert(s,x);
	}
}
