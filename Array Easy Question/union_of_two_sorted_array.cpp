    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
          int j=0;
            int i=0;
            vector<int>arr3;
         while(i<n&&j<m){
            if(arr1[i]<=arr2[j]){
                if(arr3.size()==0||arr3.back()!=arr1[i]){
                    arr3.push_back(arr1[i]);
                }
                i++;
            }else{
                if(arr3.size()==0||arr3.back()!=arr2[j]){
                arr3.push_back(arr2[j]);
                }
                j++;
                
            }
    
         }
         while(i<n){
                if(arr3.size()==0||arr3.back()!=arr1[i]){
                    arr3.push_back(arr1[i]);
                }
                i++;
             
         }
         while(j<m){
                  if(arr3.size()==0||arr3.back()!=arr2[j]){
                arr3.push_back(arr2[j]);
                }
                j++;
         }
         return arr3;
    }