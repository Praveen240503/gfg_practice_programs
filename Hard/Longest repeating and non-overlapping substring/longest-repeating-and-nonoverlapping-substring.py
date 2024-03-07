#User function Template for python3

class Solution:
    def longestSubstring(self, s , n):
        # code here 
        i,j=0,0
        res=""
        while(i<n and j<n):
            st = s[i:j+1]
            # print(st)
            if st in s[j+1:n]:
                # print(s[j+1:n])
                if(len(res) < j-i+1):
                    res = st
                    # print(res)
            else:
                i+=1
            j+=1
        if ( res == ""):
            return "-1"
        return res
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        S=input()
        
        ob = Solution()
        print(ob.longestSubstring(S , N))
# } Driver Code Ends