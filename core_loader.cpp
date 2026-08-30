#include <iostream>
#include <vector>

class SecureProcessor {
public:
    explicit SecureProcessor(int seed) : state_(seed) {}

    int run_loader(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 32) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SecureProcessor obj(32);
    std::cout << obj.run_loader(32) << std::endl;
    return 0;
}
