#include <bits/stdc++.h>
using namespace std;
void arrange(vector<int>& arr, int n){
    vector<int>positive;
    vector<int>negative;
    for (int num : arr) {
        if (num >= 0) {
            positive.push_back(num);
        } else {
            negative.push_back(num);
        }
    }
    int i=0,k=0,j=0;
    while(i<positive.size() && j<negative.size()){
        if(k%2==0){
            arr[k]=positive[i];
            i++;
        }else{
            arr[k]=negative[i];
        }
        k++;
    }
    //adding anypositive and negative values to array;
    while (i < positive.size()) {
        arr[k] = positive[i];
        i++;
        k++;
    }

    while (j < negative.size()) {
        arr[k] = negative[j];
        j++;
        k++;
    }

    
}    
int main()
{
    vector<int> arr = {1, -3, 5, 7, -9, -2};
    cout << "Original Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    arrange(arr,6);
    cout << "\nRearranged Array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    cout<<endl;
    return 0;
}