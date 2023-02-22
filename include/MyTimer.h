// This is a simple timer-class for code profiling.
// Timer counts time from the moment of the timer-object construction.
// It returns time elapsed either by getTime(std::string message), resetTime(std::string message) method
// displaying the message or at the moment of the timer-object destruction

#pragma once
//#ifndef MYTIMER_H
//#define MYTIMER_H

#include <chrono>
#include <thread>
#include <iostream>

class MyTimer
{
    public:
        MyTimer();
        MyTimer(std::string message = {});
        ~MyTimer();
        getTime(std::string message = {});
        resetTime(std::string message = {});
    private:
        std::string msg;
        std::chrono::time_point<std::chrono::steady_clock> start;
        std::chrono::time_point<std::chrono::steady_clock> stop;
};

//#endif // MYTIMER_H
