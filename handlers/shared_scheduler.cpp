#include <iostream>
#include <vector>

class StreamResolver {
public:
    explicit StreamResolver(int seed) : state_(seed) {}

    int dispatch_scheduler(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 65) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    StreamResolver obj(65);
    std::cout << obj.dispatch_scheduler(65) << std::endl;
    return 0;
}
