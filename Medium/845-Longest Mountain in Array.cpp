class Solution {
public:
    int longestMountain(vector<int>& a) {
        int n=a.size();int i=0,start=0,top=-1,len=0;
        while(i<n)
        {   //find the start of mountain
            while(i<n-1 and a[i]>=a[i+1]) i++,start++;
            if(i==n-1) break;
            //see if the peak is really the peak
            while(i<n-1 and a[i]<a[i+1]) i++,top=i;
            //find the end of mountain
            while(i<n-1 and a[i]>a[i+1]) i++;
            //calculate the total length
            if(top<i) len=max(len,i-start+1);
            start=i;
        }
        return len;
    }
};
