// https://leetcode.com/problems/design-a-stack-with-increment-operation/description/?envType=daily-question&envId=2024-09-30

class CustomStack {
public:
    int st[1000];
    int n;
    int top;
    CustomStack(int maxSize) {
        top=-1;
        n=maxSize;
    }
    
    void push(int x) {
        if (top==n-1)
            return;
        st[++top]=x;
    }
    
    int pop() {
        if(top==-1)
            return -1;
        return st[top--];
    }
    
    void increment(int k, int val) {
        int l=min(k,top+1);
        for (int i=0;i<l;i++)
        {
            st[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
