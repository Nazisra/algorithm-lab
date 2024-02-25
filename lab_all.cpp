#include <bits/stdc++.h>
using namespace std;
//#define rahad()  ios_base::sync_with_stdio(0); cin.tie(0);

void merge(int *a, int lower, int mid, int upper)
{

   int i = lower;
   int j = mid+1;
   int b[upper + 1];
   int k = lower;

   while (i <= mid && j <= upper)
   {

      if (a[i] <=a[j])
      {
         b[k] = a[i];
         k++;
         i++;
      }
      else if (a[i] > a[j])
      {
         b[k] = a[j];
         j++;
         k++;
      }

      if (i > mid)
      {

         while (j <= upper)
         {

            b[k] = a[j];
            k++;
            j++;
         }
      }

       if (j > upper)
      {

         while (i <= mid)
         {
            b[k] = a[i];
            i++;
            k++;
         }
      }
   }

      for (int i = lower; i <= upper; i++)
      {

         a[i] = b[i];
      }
   }


void merge_sort(int *a, int lower, int upper)
{

   if (lower < upper)
   {
      int mid = (lower + upper) / 2;

      merge_sort(a, lower, mid);
      merge_sort(a, mid + 1, upper);
      merge(a, lower, mid, upper);
   }
}

int main()
{  //rahad();
   int t;
   cin >> t;
   int a[t + 1];
   for (int i = 0; i < t; i++)
   {
      a[i] = rand() % 10 + 7;
   }
   cout << "before" << endl;
   for (int i = 0; i < t; i++)
   {
      cout << a[i] << " ";
   }

   merge_sort(a, 0, t - 1);

   cout << endl
        << "after" << endl;

   for (int i = 0; i < t; i++)
   {
      cout << a[i] << " ";
   }
}

/*int binary(int *a,int l,int u,int key){


if(l<=u){

int mid=(l+u)/2;
if(a[mid]==key)
{
 return mid;
}
else if(key >mid){

return binary(a,mid+1,u,key);

}
else
return binary(a,l,mid-1,key);


}
return -1;
}


*/
/*void bubble(int *a,int s){

 for(int i=1;i<s-1;i++){

  for(int j=0;j<=s-i-1;j++){
  if(a[j]>a[j+1]){
  swap(a[j],a[j+1]);

  }

  }






 }







}
*/
/*
void insert(int *a,int n){


for(int i=1;i<n;i++){

int current=a[i];
int j=i-1;
   while(a[j]>current && j>=0){
    a[j+1]=a[j];
    j--;


   }
   a[j+1]=current;
}





}*/