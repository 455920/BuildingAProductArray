class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        vector<int> B;
        int len  = A.size();
        if(len>=2)
        {
            B.push_back(1);
            for(int i=1;i<len;i++)
            {
                 B.push_back(B[i-1]*A[i-1]);
            }
            int tmp=1;
            for(int i=len-1;i>=0;i--)
            {
                B[i]=B[i]*tmp;
                tmp=tmp*A[i];
            }
        }
        return B;
    }
};
