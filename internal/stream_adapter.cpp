#include <iostream>
#include <vector>

class LiteFactory {
public:
    explicit LiteFactory(int seed) : state_(seed) {}

    int dispatch_adapter(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 37) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    LiteFactory obj(37);
    std::cout << obj.dispatch_adapter(37) << std::endl;
    return 0;
}
