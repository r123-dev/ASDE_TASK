#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long p;cin>>p;
  long long b;cin>>b;
  vector<long long> v(11);
  for(int i=0;i<11;i++)
  {
    cin>>v[i];
  }
  
  long long tot_pow=(b+1)*p;
  
  long long x=v[2];
  
    x/=2;
    v[3]+=x;
  
  long long y=v[6];
  
    y/=2;
    v[7]+=y;
  
  long long maxpow=*max_element(v.begin(),v.end());
  bool ans=true;
  for(int i=0;i<11;i++)
  {  if(maxpow==v[i]){maxpow=INT_MIN;continue;}
    if(tot_pow<v[i])
    {ans=false;break;}
    
    tot_pow-=v[i];
  }
  if(ans)cout<<"abhimanyu can easily comes out from chakravyuh";
  else
  cout<<"abhimanyu can't espace from chakravyuh";
}