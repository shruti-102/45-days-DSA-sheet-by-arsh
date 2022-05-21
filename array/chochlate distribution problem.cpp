//time= O(nlogn) space: O(1)
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long mindiff=INT_MAX,diff=0;
    long long i=0,j=m-1;
    if(m==n) return a[n-1]-a[0];
    
    for(long long k=0;k<=n-m;k++,j++)
    {
        diff=a[j]-a[k];
        mindiff=min(mindiff,diff);
    }
    return mindiff;
    }
};
