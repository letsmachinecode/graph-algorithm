

#include<bits/stdc++.h>
using namespace std;

vector<int> v[8];
vector<int> visited(8,0);

     /*
     
      1
     /
    2
    /\
  3    4
       /\
     5    6
  7->>8

*/
 
void dfs(int n){
      
      visited[n-1]=1;
       //cout<<n<<" ";
    
     int child;
       for(int i=0;i<v[n].size();++i){
        child=v[n][i];
         if(visited[child]==0){
          dfs(child);
         }
      }
 return;

}
int main(){
  
   int m=6;
   while(m--){
     int a,b;
     cin>>a>>b;
     v[a].push_back(b);
     v[b].push_back(a);    

}
  // dfs(1);//for printing the  graph with the depth first search
    // cout<<"\n";
    static int count=0;
   for(int i=1;i<=8+--;++i){
       if(visited[i]==0){
         
        dfs(i);
        count++;
       }
   }
  cout<<count;
   cout<<"\n";
return 0;
}