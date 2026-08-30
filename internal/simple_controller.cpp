#include <iostream>
#include <vector>

class SecureEngine {
public:
    explicit SecureEngine(int seed) : state_(seed) {}

    int handle_buffer(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 4) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    SecureEngine obj(4);
    std::cout << obj.handle_buffer(4) << std::endl;
    return 0;
}
