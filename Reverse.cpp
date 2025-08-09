/*And certainly,We shall test you with something of fear, hunger, loss of wealth,
lives and fruits.But give glad tidings to patient. ~[Surah Al-Baqarah - 155]*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter array size:";
    cin >> n;
    cout << "Enter array element:";
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    cout << "Reverse: ";
    for (int i = n - 1; i >= 0; i--)
        cout << a[i] << " ";

        return 0;
}
// Created by : PARVEZ HOSSAIN POLASH