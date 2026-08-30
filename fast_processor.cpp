#include <iostream>
#include <vector>

class SimpleFactory {
public:
    explicit SimpleFactory(int seed) : state_(seed) {}

    int handle_collector(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 86) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    SimpleFactory obj(86);
    std::cout << obj.handle_collector(86) << std::endl;
    return 0;
}
