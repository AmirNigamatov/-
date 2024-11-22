#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1 = 1, x2 = 1.5, x3 = 2, y1 = 1, y2 = 2, y3 = 1.5, r1 = 1, r2 = sqrt(5) / 2, r3 = sqrt(5) / 2;
    double top = std::max(x1 + r1, std::max(x2 + r2, x3 + r3));
    double bottom = std::max(x1 - r1, std::max(x2 - r2, x3 - r3));
    double right = std::max(y1 + r1, std::max(y2 + r2, y3 + r3));
    double left = std::max(y1 - r1, std::max(y2 - r2, y3 - r3));
    for (int con = 100; con < 100000; con += 500) {
        int count = 0;
        double x, y;
        for (int i = 0; i < con; i++) {
            x = double(rand()) / RAND_MAX;
            x = bottom + x * (top - bottom);
            y = double(rand()) / RAND_MAX;
            y = left + y * (right - left);
            if ((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r1 * r1) {
                if ((x - x2) * (x - x2) + (y - y2) * (y - y2) <= r2 * r2) {
                    if ((x - x3) * (x - x3) + (y - y3) * (y - y3) <= r3 * r3) {
                        count++;
                    }
                }
            }
        }
        std::cout << double(count) * (top - bottom) * (right - left) / con << ", ";
    }
    std::cout << "\n";
    top = std::min(x1 + r1, std::min(x2 + r2, x3 + r3));
    bottom = std::min(x1 - r1, std::min(x2 - r2, x3 - r3));
    right = std::min(y1 + r1, std::min(y2 + r2, y3 + r3));
    left = std::min(y1 - r1, std::min(y2 - r2, y3 - r3));
    for (int con = 100; con < 100000; con += 500) {
        int count = 0;
        double x, y;
        for (int i = 0; i < con; i++) {
            x = double(rand()) / RAND_MAX;
            x = bottom + x * (top - bottom);
            y = double(rand()) / RAND_MAX;
            y = left + y * (right - left);
            if ((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r1 * r1) {
                if ((x - x2) * (x - x2) + (y - y2) * (y - y2) <= r2 * r2) {
                    if ((x - x3) * (x - x3) + (y - y3) * (y - y3) <= r3 * r3) {
                        count++;
                    }
                }
            }
        }
        std::cout << double(count) * (top - bottom) * (right - left) / con << ", ";
    }
}
