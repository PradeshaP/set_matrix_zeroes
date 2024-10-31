class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n;   
        int maxi=INT_MIN;
        for(int i=0;i<m;i++)
        {
            n=matrix[i].size();
            maxi=max(maxi,n);
        }
        n=maxi;
        vector<int>row(m);
       vector<int>col(n);
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                   row[i]=1;
                   col[j]=1;
                }
            }
         }
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                if(row[i]||col[j])
                matrix[i][j]=0;
            }
           
         }
         for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
         }
    }
};