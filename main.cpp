//
//  main.cpp
//  arrays
//
//  Created by Кирилл Колков on 12.10.2020.
//

#include <iostream>
using namespace std;

int main() {
    
    int unsortedArray [5];
    
    for (int i = 0; i <= 4; i++) {
        cin >> unsortedArray [i];
    }
    
    for (int j = 0; j <= 4; j++) {
        int temporary = unsortedArray [0];
        if (unsortedArray [j] <= unsortedArray [0]) {
            temporary = unsortedArray [0];
            unsortedArray [0] = unsortedArray [j];
            unsortedArray [j] = temporary;
            temporary = unsortedArray [0];
        }
    }
    for (int j = 1; j <= 4; j++) {
        int temporary = unsortedArray [1];
        if (unsortedArray [j] <= unsortedArray [1]) {
            temporary = unsortedArray [1];
            unsortedArray [1] = unsortedArray [j];
            unsortedArray [j] = temporary;
            temporary = unsortedArray [1];
        }
    }
    for (int j = 2; j <= 4; j++) {
        int temporary = unsortedArray [2];
        if (unsortedArray [j] <= unsortedArray [2]) {
            temporary = unsortedArray [2];
            unsortedArray [2] = unsortedArray [j];
            unsortedArray [j] = temporary;
            temporary = unsortedArray [2];
        }
    }
    for (int j = 3; j <= 4; j++) {
        int temporary = unsortedArray [3];
        if (unsortedArray [j] <= unsortedArray [3]) {
            temporary = unsortedArray [3];
            unsortedArray [3] = unsortedArray [j];
            unsortedArray [j] = temporary;
            temporary = unsortedArray [3];
        }
    }
    for (int j = 4; j <= 4; j++) {
        int temporary = unsortedArray [4];
        if (unsortedArray [j] <= unsortedArray [4]) {
            temporary = unsortedArray [4];
            unsortedArray [4] = unsortedArray [j];
            unsortedArray [j] = temporary;
            temporary = unsortedArray [4];
        }
    }
    
    
    cout << unsortedArray [0] << " " << unsortedArray [1] << " " << unsortedArray [2] << " " << unsortedArray [3] << " " << unsortedArray [4];
}
