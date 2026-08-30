#include <iostream>
#include <vector>

class AtomicResolver {
public:
    explicit AtomicResolver(int seed) : state_(seed) {}

    int flush_session(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 4) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AtomicResolver obj(4);
    std::cout << obj.flush_session(4) << std::endl;
    return 0;
}
