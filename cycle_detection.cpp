#include<bits/stdc++.h>
using namespace std;
vector<int> v[6];
vector<int> visited(6,0);

bool cycdet(int n,int par){
     visited[n-1]=1;
  for(int i=0;i<v[n].size();++i){
    int child=v[n][i];
    if(visited[child-1]==0){
         //visited[child-1]=1;
        if(cycdet(child,n)==true){
        	return true;
        }
    }
    else {
        if(child!=par) return true;
    }

  }
return false;
}


int main(){
int m=5;
   while(m--){
     int a,b;
     cin>>a>>b;
     v[a].push_back(b);
     v[b].push_back(a); 
}
  if(cycdet(1,-1)) cout<<"yes";
  else cout<<"No";
	return 0;
}