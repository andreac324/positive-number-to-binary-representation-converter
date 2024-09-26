//
//  main.cpp
//  ca01
//
//  Created by Andrea d Cazares on 9/25/24.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    int i = 0;
    int binary[10] = {0};
    
    cout << "Please enter a positive number: ";
    cin >> num;
    
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    cout << "Binary rep: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
    
    return 0;
}
