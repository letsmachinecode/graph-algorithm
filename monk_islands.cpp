#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000];
vector<int> visited(1000,0);
vector<int> d(1000,0);
void bfs(int n){
   queue<int> q;
   q.push(n);
   visited[n-1]=1;
   d[n-1]=0;
   while(!q.empty()){
  int curr=q.front();
    q.pop();
   for(int i=0;i<v[curr].size();++i){
   	    int child=v[curr][i];
   	    if(visited[child-1]==0){
   	    	visited[child-1]=1;

   	    	d[child-1]=d[curr-1]+1;
   	    	//cout<<d[child-1];
   	    	q.push(child);
   	    }
   }
   }
}
int main() {
   int test;
   cin>>test;
   while(test--){ 
   int n,m;
   cin>>n>>m;
   while(m--){
   int a,b;
   cin>>a>>b;
v[a].push_back(b);
v[b].push_back(a);
}
   bfs(1);
   cout<<"distance is "<<d[n-1]<<"\n";
      for(int i=0;i<1000;++i){
      	visited[i]=0;
      	d[i]=0;
      }

}

	return 0;
}