#include <iostream>
using namespace std;

int Search(int Arr[], int els, int n)
{
    if (n == 0)
        break;
    else if (els == Arr[n-1])
        return pos = n-1;
    else
        return Search(Arr[], els, n-i);

}



int main()
{
    int size,iput,
    cout<<"Enter the total number of input"<<endl;
    cin>> size;
    int ray[size];
    cout<<"Enter elements"<< endl;
    for (int i = 0; i< size-1; i++; )
    {
        cin>>ray[i];
    }
    return 0;

}
