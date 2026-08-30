#include <iostream>
#include <vector>

class SimpleAdapter {
public:
    explicit SimpleAdapter(int seed) : state_(seed) {}

    int flush_router(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 21) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    SimpleAdapter obj(21);
    std::cout << obj.flush_router(21) << std::endl;
    return 0;
}
