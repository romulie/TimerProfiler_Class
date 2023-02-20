#pragma once

#include <chrono>
#include <thread>
#include <iostream>

class MyTimer
{
    public:
        MyTimer();
        MyTimer(std::string message);
        ~MyTimer();
        getTime(std::string message);
    private:
        std::string msg;
        std::chrono::time_point<std::chrono::steady_clock> start;
        std::chrono::time_point<std::chrono::steady_clock> stop;
};


//#ifndef MYTIMER_H
//#define MYTIMER_H
//#endif // MYTIMER_H
