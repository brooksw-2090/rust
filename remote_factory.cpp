#include <iostream>
#include <vector>

class AtomicLoader {
public:
    explicit AtomicLoader(int seed) : state_(seed) {}

    int parse_handler(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 17) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AtomicLoader obj(17);
    std::cout << obj.parse_handler(17) << std::endl;
    return 0;
}
