#include "React.h"

class MyComponent final : public React::Component {
    std::string render() override {
        return R"(
            <main>
                <h1>Hello World!</h1>
            </main>
        )";
    }
};

int main() {
    MyComponent myComponent;
    return ReactDOM::render(&myComponent);
}
