#include<iostream>
using namespace std;
int cs;
int 
int main()
{
int space =0;    
int array[2][100], n, w, i, curw, used[100], maxi = -1, totalprofit=0;
cout << "Enter number of objects: ";
cin >> n;
cout << "Enter the weight of the knapsack: ";
cin >> w;
for(i=0; i<n; i++)
{
cin >> array[0][i] >>array[1][i];
}
for(i=0 ; i<n; i++)
{
used[i] = 0;
}
curw = w;
while(curw >= 0)
{
maxi = -1;
for(i = 0; i<n; i++)
{
if((used[i] == 0) && ((maxi == -1) || (((float)array[1][i]/ (float) array[0][i] > (float)
array[1][maxi]/ (float) array[0][maxi]))))
{
maxi = i;
}
}
used[maxi] = 1;
curw -= array[0][maxi];
totalprofit += array[1][maxi];
if(curw >= 0)
{
cout <<"\nAdded object"<< maxi +1 << " Weight: "
<< array[0][maxi] << "Profit: " << array[1][maxi]
<<" completely in the bag", Space:  << curw;
}
else
{
cout << "\nAdded object " << maxi + 1 << " Weight: "
<<(array[0][maxi] + curw) << " Profit: "
<<(array[1][maxi] / array[0][maxi]) * (array[0][maxi] + curw) << " Partially in the bag",
Space: 0
<< " Weight added is: "<< curw + array[0][maxi];
totalprofit -= array[1][maxi];
totalprofit += ((array[1][maxi] / array[0][maxi]) * (array[0][maxi] + curw));
}
}
cout << "\nBags filled with objects worth: " << totalprofit;
return 0;
}
