#include <iostream>
using namespace std;

int main() {
    int nodeNumber = 1;
    for (int r = 1; r <= 2; r++) {
        for (int c = 1; c <= 2; c++) {
            cout << "Row " << r << ", Col " << c << " -> Sensor Node " << nodeNumber << endl;
            nodeNumber++;
        }
    }
    return 0;
}

