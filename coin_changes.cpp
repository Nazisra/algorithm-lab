#include <bits/stdc++.h>
using namespace std;
#define rahad() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
#define all v.begin(),v.end()
#define output for(auto it:v){cout<<it<<" ";}
const int N = 1e8 + 10;
int a[N];




int main(){
vector<pair<int,int>>v;


int t;
cin>>t;
for(int i=0;i<t;i++){
    cin>>a[i];
    
}



sort(a,a+t,greater<int>());// decending order e hobe
int key;
cin>>key;
int count=0;
for(int i=0;i<t;i++){
    int zz=0;
    int rem=0;
 while(key>=a[i]){   //value check kortesi
   rem=key/a[i];
  key=key-(rem*a[i]);
  count++;
  v.push_back({a[i],rem});// koyta kotobar ase ber kortesi
  
 }
 
if(key==0)break;


}



cout<<count<<endl;
for(auto it:v){

    cout<<it.first<<" "<<it.second<<endl;
}








}