#include "animal.hpp"
#include <iostream>

void animal::trigger_shout(){
    std::cout<<"Triggering shout signal"<<std::endl;
    emit shout();
}

void animal::trigger_shout_as_told(const char* msg){
    emit shout_as_told(msg);
}