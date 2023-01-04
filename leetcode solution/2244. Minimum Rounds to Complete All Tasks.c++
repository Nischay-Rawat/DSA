class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
       unordered_map<int, int> umap; 
     for(int i=0;i<tasks.size();i++){
         int element=tasks[i];
               if(umap.find(element)!=umap.end()){
 std::unordered_map<int, int>::iterator it = umap.find(element);
       it->second++;
     }else{
         umap[tasks[i]]=1;
     }
     }
     int count=0;

  for (auto [first,second] : umap){
if(second==1){
    return -1;
} 
if(second%3==0){
    count+=second/3;
}else{
    if(second%3==1){
        count+=(second/3+1);
    }
    if(second%3==2){
        count+= (second/3+1);
    }
}

  }

  return count;
    }
};