#include<bits/stdc++.h>
using namespace std;
/*
    1
    /
    2
    /\
    3 4
      /\
      5 6
  in[]={1 2 3 5 6 8};

  out={12 11 4 10 7 9};
*/



int in[6];
int out[6];
vector<int>v[6];
vector<int>visited(6,0);
void dfs(int n){
static int timer=1;
visited[n-1]=1;
in[n-1]=timer++;
//in.push_back(timer++);
for(int i=0;i<v[n].size();++i){
	int child=v[n][i];
	if(visited[child-1]==0){
		dfs(child);
	}
}
   out[n-1]=timer++;


}
int main(){
   int m=5;
   while(m--){
   	int a,b;
   	cin>>a>>b;
   	v[a].push_back(b);
   	v[b].push_back(a);
   }
dfs(1);
for(int i=0;i<6;++i){
   cout<<in[i]<<" ";

}
cout<<"\n";
for(int i=0;i<6;++i){
	cout<<out[i]<<" ";
}

cout<<"\n";
	return 0;
}