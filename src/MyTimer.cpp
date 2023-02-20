#include "MyTimer.h"

MyTimer::MyTimer(){
    MyTimer::msg = {};
    start = std::chrono::steady_clock::now();
}

MyTimer::MyTimer(std::string message = {}){
    MyTimer::msg = message;
    start = std::chrono::steady_clock::now();
}

MyTimer::~MyTimer(){
    stop = std::chrono::steady_clock::now();
    float result = std::chrono::duration_cast<std::chrono::milliseconds>(stop-start).count();
    std::cout<< msg << ": timer stopped after" << result << " milliseconds." << std::endl;
}

MyTimer::getTime(std::string message){
    stop = std::chrono::steady_clock::now();
    float result = std::chrono::duration_cast<std::chrono::milliseconds>(stop-start).count();
    std::cout<< message << ": from start passed " << result << " milliseconds." << std::endl;
}
