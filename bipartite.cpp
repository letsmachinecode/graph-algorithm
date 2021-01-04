#include<bits/stdc++.h>
using namespace std;
 int col[6];
 vector<int> v[5];
 vector<int> visited(6,0);

 bool bipartite(int n,int c){
 	visited[n]=1;
 	col[n]=c;
 	int child;
 	for(int i=0;i<v[n].size();++i){
 	     // m=c^1;
 	      child=v[n][i];
 	      if(visited[child]==0){
 	      	  if(bipartite(child,c^1)==false)
 	           return false;
 	      }
 	      else if(col[n]==col[child]){
 	      	return false;
 	      }
 	}
 	return true;
 }

int main(){
int m=5;
   while(m--){
     int a,b;
     cin>>a>>b;
     v[a].push_back(b);
     v[b].push_back(a);    

}
  if(bipartite(1,1)){
  	cout<<"yes";
  }
  else {
  	cout<<"No"<<"\n";
  }


	return 0;
}