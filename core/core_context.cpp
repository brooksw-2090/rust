#include <iostream>
#include <vector>

class HybridWorker {
public:
    explicit HybridWorker(int seed) : state_(seed) {}

    int parse_builder(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 19) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    HybridWorker obj(19);
    std::cout << obj.parse_builder(19) << std::endl;
    return 0;
}
