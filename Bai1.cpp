#include <iostream>
using namespace std;
void sapxep(int arr[], int n) {
    int count0 = 0; // 0 la do
	int count1 = 0; // 1 la trang
	int count2 = 0; // 2 la xanh
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }
    int i = 0;
    while (count0 > 0) {
        arr[i++] = 0;
        count0--;
    }
    while (count1 > 0) {
        arr[i++] = 1;
        count1--;
    }
    while (count2 > 0) {
        arr[i++] = 2;
        count2--;
    }
}
int main() {
    int arr[] = {2, 0, 2, 0, 0, 1, 0, 2, 1};
    int n = 9;
    sapxep(arr, n);
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
