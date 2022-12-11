


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
          int j=0;
            int i=0;
            vector<int>arr3;
         while(i<n||j<m){
             int flag=0;
            if(i<n&&j<m&&arr1[i]==arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr1[i])
                  arr3.push_back(arr1[i]);
                
                i++;
                j++;
            }else if(i<n&&j<m&&arr1[i]>arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr2[j])
                      arr3.push_back(arr2[j]);
                j++;
                
            }else if(i<n&&j==m&&arr1[i]>arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr1[i])
                      arr3.push_back(arr1[i]);
                i++;
            }else if(i<n&&j<m&&arr1[i]<arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr1[i])
                      arr3.push_back(arr1[i]);
                i++;
            }else if(i==n&&j<m&&arr1[i]<arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr2[j])
                  arr3.push_back(arr2[j]);
          j++;
            }else{
                // cout<<"yes we are still ";
                // i++;
                // j++;
            }
  
         
         }
         return arr3;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
            if(i<n&&j<m&&arr1[i]==arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr1[i])
                  arr3.push_back(arr1[i]);
                
                i++;
                j++;
            }else if(i<n&&j<m&&arr1[i]>arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr2[j])
                      arr3.push_back(arr2[j]);
                j++;
                
            }else if(i<n&&j==m&&arr1[i]>arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr1[i])
                      arr3.push_back(arr1[i]);
                i++;
            }else if(i<n&&j<m&&arr1[i]<arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr1[i])
                      arr3.push_back(arr1[i]);
                i++;
            }else if(i==n&&j<m&&arr1[i]<arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr2[j])
                  arr3.push_back(arr2[j]);
          j++;
            }else{
                // cout<<"yes we are still ";
                // i++;
                // j++;
            }
  
         
         }
         return arr3;
    }