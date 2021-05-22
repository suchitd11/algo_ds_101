#include <iostream>
using namespace std;
 int main()
  {
      long int t;
      cin>>t;
      while(t--){
  long long int arr[10001],even[10001],odd[10001],i,j=0,k=0,no,z;
   cin>>no>>z;
   for(i=0; i<no;i++)
   {
   cin>>arr[i];
   }
   for(i=0; i<no;i++)
   {
   if(arr[i]%2==0)
   {
    even[j]=arr[i];
    j++;
   }
   else
   {
   odd[k]=arr[i];
   k++;
   }
   }
   if(z%2==1){
  for(i=0; i<j ;i++)
   {
    cout<<even[i]<<" ";
   }
  for(i=0; i<k; i++)
   {
    cout<<odd[i]<<" ";
   }
   }
   else{
        for(i=0; i<k; i++)
   {
    cout<<odd[i]<<" ";
   }
       for(i=0; i<j ;i++)
   {
    cout<<even[i]<<" ";
   }  
   }
   cout<<"\n";
      }
   return 0;
  }
