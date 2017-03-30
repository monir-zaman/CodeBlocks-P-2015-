#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n= 0, t, mid, start=0, end= 10;

    int arr[10]= {2,4,6,8,10,12,14,16,18,20};

    int key = 14;
    mid  = (start+end)/ 2;
    while(start<= end)
    {
        if(key == arr[mid])
        {
            cout<<"found"<<endl;


            n++;

             break;
        }

        else if(key < arr[mid])
        {
            end = mid -1;

            mid = (start + end) / 2;
        }

        else if(key > arr[mid])
        {
             start= mid+1;

            mid = (start  + end) / 2;
        }
    }

    if(n== 0) cout<<"not found";


    return 0 ;
}
