#include<iostream>
#include<stdlib.h>
using namespace std;

//Maximum and Minimum function
void maxMin(int mm[], int firstindex, int lastindex, int *max , int *min )
{
    int mid, maxm1, maxm2, minm1, minm2;

    if(lastindex - firstindex== 1 )
    {
        if (mm[firstindex] > mm[lastindex])
        {
            *max = mm[firstindex];
            *min = mm[lastindex];

        }

        else
        {
            *max = mm[lastindex];
            *min = mm[firstindex];
        }
    }

    else if(firstindex == lastindex)
    {
        *min = *max = mm[firstindex];

    }

    else if (firstindex < lastindex)
    {
        mid = (firstindex+lastindex)/2;
        maxMin(mm, firstindex, mid, &maxm1, &minm1);
        maxMin(mm, mid +1, lastindex, &maxm2, &minm2);

        if (maxm1 > maxm2)
        *max = maxm1;

        else
            *max = maxm2;

        if (minm1 < minm2)
            *min = minm1;
        else
            *min = minm2;


    }


}

int main()
{

      int size,iput;
      int maxx = 0;
      int minn = 0;
    cout<<"Enter the total number of input"<<endl;
    cin>> size;
     int ray[size];
    cout<<"Enter elements"<< endl;
    for (int i = 0; i< size; i++)
        cin>>ray[i];

    maxMin(ray,0,size-1,&maxx,&minn);

    cout<<"Maximum element = " << maxx<< endl;
    cout<<"Minimum element = " << minn<< endl;

    return 0;
}
