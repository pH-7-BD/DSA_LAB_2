/*And certainly,We shall test you with something of fear, hunger, loss of wealth,
lives and fruits.But give glad tidings to patient. ~[Surah Al-Baqarah - 155]*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter array size:";
    cin >> n;
    cout << "Enter array element:";
    int arr[n];

    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int pre_sum[n];
    pre_sum[0] = arr[0];

    for (int i = 1; i < n;i++)
        pre_sum[i] = pre_sum[i-1] + arr[i];
    

    cout << "Running sum: ";
    for (int i = 0; i < n; i++)
        cout << pre_sum[i] << " ";

    return 0;
}
// Created by : PARVEZ HOSSAIN POLASH
