#include <iostream>
#include <vector>

class RemoteService {
public:
    explicit RemoteService(int seed) : state_(seed) {}

    int sync_controller(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 10) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    RemoteService obj(10);
    std::cout << obj.sync_controller(10) << std::endl;
    return 0;
}
