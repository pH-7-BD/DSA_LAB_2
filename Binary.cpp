/*And certainly,We shall test you with something of fear, hunger, loss of wealth,
lives and fruits.But give glad tidings to patient. ~[Surah Al-Baqarah - 155]*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++) cin >> arr[i];

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n - 1; j++){
            if(arr[i]<arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Find Value:";
    int val;
    cin >> val;
    int left = 0, right = n - 1;
    bool ck = false;

    for (int i = 0;right>left || right==left; i++){
        int middle = (right + left) / 2;
        if(arr[middle]==val){
            ck = true;
            break;
        }
        else if(arr[middle]<val){
            left = middle+1;
        }
        else{
            right = middle-1;
        }
    }

    ck == true ? cout << "Found" : cout << "Not Found";

    return 0;
}
// Created by : PARVEZ HOSSAIN POLASH