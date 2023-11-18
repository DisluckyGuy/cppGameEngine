#pragma once


namespace ge {
    struct Data;
    class State {
        public:
        State(Data* data){
            
        }
        virtual void update() = 0;
        virtual void render() = 0;
    };
}
#include "handler.hpp"