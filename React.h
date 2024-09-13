#ifndef REACT_H
#define REACT_H
#include <iostream>
#include <ostream>
#include <string>

class React {
public:
    class Component {
    public:
        virtual ~Component() = default;
        virtual std::string render() = 0;
    };

    class DOM {
        public:
        static int render(Component* component) {
            std::cout << component->render() << std::endl;
            return 0;
        }
    };
};

#endif //REACT_H
