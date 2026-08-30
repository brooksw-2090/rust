#include <iostream>
#include <vector>

class BatchRegistry {
public:
    explicit BatchRegistry(int seed) : state_(seed) {}

    int compute_worker(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 95) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    BatchRegistry obj(95);
    std::cout << obj.compute_worker(95) << std::endl;
    return 0;
}
