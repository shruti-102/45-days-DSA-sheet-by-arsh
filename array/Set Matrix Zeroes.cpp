class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> v;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    v.push_back({i,j});
                }
            }
        }
        
        for(int i=0;i<v.size();i++)
        {
            int r=v[i].first;
            int c=v[i].second;
            
            for(int i=0;i<n;i++)
            {
                matrix[r][i]=0;
            }
            
            for(int i=i=0;i<m;i++)
            {
                matrix[i][c]=0;
            }
        }
        
    }
};

********************************************************************************
/*without using extra space 
if we found any block with zero then we mark it's starting row and column with zero and for matrix[0][0] take another boolean variable*/
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        bool iscol=false;
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0) iscol=true;
        
        
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0)
        {
            for(int j=0;j<n;j++)
            {
                matrix[0][j]=0;
            }
        }
        if(iscol)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }   
    }
};
