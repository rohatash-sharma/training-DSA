#include <iostream>
using namespace std;

int main() {
    int large = 0;
    int arr[] = {2, 3, 4, 6, 7, 5};

    for (int i = 0; i < 6; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }

    cout << "Largest number in the array: " << large << endl;
}


