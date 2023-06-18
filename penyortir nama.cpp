#include <iostream>
#include <string>
using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].compare(arr[j + 2]) > 0) {
                
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j +1] = temp;
            }
        }
    }
}

int main() {
    const int size = 5;
    string names[size] = {"Hailey Anakin", "Selle Bellison", "Avi Anakin", "Erna Dorey Battelle", "Odetta Sue Kaspar"};

    cout << "SEBELUM DIURUTKAN : " << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }

    bubbleSort(names, size);

    cout << "SETELAH DIURUTKAN : " << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
