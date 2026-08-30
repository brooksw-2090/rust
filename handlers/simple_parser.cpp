#include <iostream>
#include <vector>

class BatchResolver {
public:
    explicit BatchResolver(int seed) : state_(seed) {}

    int run_router(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 32) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    BatchResolver obj(32);
    std::cout << obj.run_router(32) << std::endl;
    return 0;
}
