#include <iostream>
#include <vector>

class SmartScheduler {
public:
    explicit SmartScheduler(int seed) : state_(seed) {}

    int render_processor(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 70) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SmartScheduler obj(70);
    std::cout << obj.render_processor(70) << std::endl;
    return 0;
}
