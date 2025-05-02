#include <bits/stdc++.h>
using namespace std;
// Dutch flag algorithm
int main() {
 vector<int> arr{0,2,1,2,0,2,0,1,2,1,1,1};
 int low=0,mid=0;
 int high=arr.size();
 while(mid<high)
 {
     if(arr[mid]==0)
     {
         swap(arr[low],arr[mid]);
         low++;
         mid++;
     }
     else if(arr[mid]==1)
     {
         mid++;
     }
     else if(arr[mid]==2)
     {
         swap(arr[mid],arr[high]);
         high--;
     }
 }
  for(auto i :arr)
  {
      cout<<i<<" ";
  }
 
}
