#include<bits/stdc++.h>
using namespace std;
vector<int> v[7];
vector<int> visited(7,0);
int maxD,maxNode;
void dfs(int n,int d){
	visited[n-1]=1;
	if(d>maxD){
		maxD=d;
		maxNode=n;
	}
	for(int i=0;i<v[n].size();++i){
		int child=v[n][i];
		if(visited[child-1]==0){
			dfs(child,d+1);
		}
	}
}




int main(){
 int m=6;
 while(m--){
 	int a,b;
 	cin>>a>>b;
 	v[a].push_back(b);
 	v[b].push_back(a);
 }
maxD=-1;
dfs(1,0);
maxD=-1;
for(int i=0;i<visited.size();++i){
      visited[i]=0;
	}
	cout<<maxNode<<" ";
	dfs(maxNode,0);
	cout<<maxD<<"\n";
	return 0;
}
