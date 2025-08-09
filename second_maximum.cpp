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
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
            if(max<arr[i])
                max = arr[i];
    }
    int sec_max = INT_MIN;
    for (int i = 0; i < n;i++){
        if(sec_max<arr[i] && arr[i]!=max)
            sec_max = arr[i];
    }
    cout  <<"Second maximun is: "<< sec_max;

    return 0;
}
// Created by : PARVEZ HOSSAIN POLASH
