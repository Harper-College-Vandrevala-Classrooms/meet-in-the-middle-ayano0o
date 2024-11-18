#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm> 

using namespace std;

double findMedian(const vector<double>& numbers) {
    size_t n = numbers.size();
    if (n % 2 == 0) {
        return (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
    } else {
        return numbers[n / 2];
    }
}

int main() {


    return 0;

}
