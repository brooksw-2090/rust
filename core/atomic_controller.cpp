#include <iostream>
#include <vector>

class RemoteManager {
public:
    explicit RemoteManager(int seed) : state_(seed) {}

    int compute_resolver(int count) {
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
    RemoteManager obj(68);
    std::cout << obj.compute_resolver(68) << std::endl;
    return 0;
}
