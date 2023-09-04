#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int>& arr, int low, int high){
    while (low <high) {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void reverseAtFixed(vector<int>& arr, int n,int index){
    index=index%n;
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,0,index-1);

    reverse(arr,index,n-1);

}    
int main()
{
    vector<int> arr = {1,2,3,4,5,6};
    cout << "Original Array: ";
    // for (int num : arr) {
    //     cout << num << " ";
    // }
    reverseAtFixed(arr,6,4);
    cout << "\nRearranged Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout<<endl;
    return 0;
}