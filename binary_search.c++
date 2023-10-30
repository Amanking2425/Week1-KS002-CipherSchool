#include<iostream>
using namespace std;

void simplesearch(int *arr, int l, int r, int val) {
    // We have to check whether val is present in the array between the indices l and r
    for (int i = l; i <= r; i++) {
        if (arr[i] == val) {
            cout << "Congratulations, your value is present in the array" << endl;
            return;
        }
    }
    cout << "Sorry, your value is not present in the array" << endl;
}

int main() {
    int arr[] = {1, 3, 10, 2, 4, 7, 5};
    int size = 7;

    simplesearch(arr, 0, 6, 13);
    simplesearch(arr, 0, 6, 10);

    return 0;
}
