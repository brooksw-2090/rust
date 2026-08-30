#include <iostream>
#include <vector>

class SharedGateway {
public:
    explicit SharedGateway(int seed) : state_(seed) {}

    int compute_manager(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 68) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SharedGateway obj(68);
    std::cout << obj.compute_manager(68) << std::endl;
    return 0;
}
