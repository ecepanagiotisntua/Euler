#include <iostream>

using namespace std;

int main(){
int N, M;
int a, b, c=0, u, v;
bool flag=true;

cin>>N>>M;
int graph[10000];
for(int i = 0; i < M; i++){
  cin>>a>>b;
  graph[a]++;
  graph[b]++;  
}

for(int i = 0; i < N; i++){
  if(graph[i]%2==0) continue;
  if(graph[i]%2!=0){
    c++;
    if(c == 1){
      flag = false;
      u = i;
    } 
    if(c == 2){
      flag = true;
      v = i;
    }
    if(c > 2){
      flag = false;
      break;
    } 
  }
   
}

if(flag){
  if(c == 2){
    cout<<"PATH "<<u<< " "<<v<<endl;
  }
  if(c == 0){
    cout<<"CYCLE"<<endl;
  }
}else cout<<"IMPOSSIBLE"<<endl;


}

