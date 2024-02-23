#include <bits/stdc++.h>
using namespace std;
//#define rahad() ios_base::sync_with_stdio(0); cin.tie(0);

void merging(int *a, int lower, int mid, int upper)
{
    
    int i = lower;
    int j = mid + 1;
    int k = lower;
    int b[upper + 1];

    while (i <= mid && j <= upper)
    {

        if (a[i] <= a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] > a[j])
        {
            b[k] = a[j];
            k++;
            j++;
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
                k++;
                i++;
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
   int mid = (lower + upper) / 2;
    if (lower < upper)
    {     

        merge_sort(a, lower, mid );
        merge_sort(a, mid + 1, upper);
        merging(a, lower, mid, upper);
    }
}

int main()
{    
    int t;
    cin >> t;
    int a[t + 1];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    cout<<"before merge sort "<<endl;
 for (int i = 0; i < t; i++)
    {
        cout << a[i] << " ";
    }

    cout<<endl<<"after merge sort"<<endl;
    merge_sort(a, 0, t - 1);
    for (int i = 0; i < t; i++)
    {
        cout << a[i] << " ";
    }
}
