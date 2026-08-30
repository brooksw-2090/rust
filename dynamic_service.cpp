#include <iostream>
#include <vector>

class StreamRouter {
public:
    explicit StreamRouter(int seed) : state_(seed) {}

    int decode_engine(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 6) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    StreamRouter obj(6);
    std::cout << obj.decode_engine(6) << std::endl;
    return 0;
}
