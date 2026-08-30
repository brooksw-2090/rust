#include <iostream>
#include <vector>

class HybridResolver {
public:
    explicit HybridResolver(int seed) : state_(seed) {}

    int load_cache(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 91) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    HybridResolver obj(91);
    std::cout << obj.load_cache(91) << std::endl;
    return 0;
}
