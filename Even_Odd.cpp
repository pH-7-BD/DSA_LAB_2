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
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i]%2 ? odd++ : even++;
    }

    cout << "Odd: " << odd << endl << "Even: " << even << endl;

    return 0;
}
// Created by : PARVEZ HOSSAIN POLASH