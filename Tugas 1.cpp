#include <iostream>

bool cekDuplikat(int arr[], int panjangArr) {
    for (int i = 0; i < panjangArr; ++i) {
        for (int j = i + 1; j < panjangArr; ++j) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arrA[] = {2, 1, 3, 4};
    int panjangArrA = 4;

    std::cout << "Isi array arrA: ";
    for (int i = 0; i < panjangArrA; ++i) {
        std::cout << arrA[i] << " ";
    }
    std::cout << std::endl;

    if (cekDuplikat(arrA, panjangArrA)) {
        std::cout << "Array arrA memiliki duplikat.\n";
    } else {
        std::cout << "Array arrA tidak memiliki duplikat.\n";
    }

    return 0;
}

