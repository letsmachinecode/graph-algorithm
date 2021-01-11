#include<bits/stdc++.h>
using namespace std;
vector<int> visited(7,0);
vector<int> v[7];
void bfs(int n){
   queue<int> q;
   q.push(n);
   visited[n-1]=1;
  while(!q.empty()){
      int curr=q.front();
      cout<<curr<<" ";
      q.pop();
      for(int i=0;i<v[curr].size();++i){
      	int child=v[curr][i];
      	if(visited[child-1]==0){
      		visited[child-1]=1;
      		q.push(child);
      	}
      }

  }
  return;
}
int main(){
int m=8;
while(m--){
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
}
cout<<"Level by level traversal of the tree or graph"<<"\n";
  bfs(1);
cout<<"\n";
	return 0;
}