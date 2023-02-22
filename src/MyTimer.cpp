#include "MyTimer.h"

MyTimer::MyTimer(){
    MyTimer::msg = {};
    start = std::chrono::steady_clock::now();
}

MyTimer::MyTimer(std::string message){
    MyTimer::msg = message;
    start = std::chrono::steady_clock::now();
}

MyTimer::~MyTimer(){
    stop = std::chrono::steady_clock::now();
    float result = std::chrono::duration_cast<std::chrono::milliseconds>(stop-start).count();
    std::cout<< msg << ": timer IS STOPPED after" << result << " milliseconds." << std::endl;
}

MyTimer::getTime(std::string message){
    stop = std::chrono::steady_clock::now();
    float result = std::chrono::duration_cast<std::chrono::milliseconds>(stop-start).count();
    std::cout<< msg << " timer:" << message << ": from start passed " << result << " milliseconds." << std::endl;
}

MyTimer::resetTime(std::string message){
    float result = std::chrono::duration_cast<std::chrono::milliseconds>(stop-start).count();
    std::cout<< msg << " timer: IS RESET (at) " << message << " after " << result << " milliseconds."
    << std::endl;
    start = std::chrono::steady_clock::now();
}
