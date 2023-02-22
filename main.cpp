#include "MyTimer.h"
#include <iostream>
#include <chrono>
#include <thread>

//using namespace std;

int main(){

{
MyTimer t("MY_TIMER");
MyTimer tt("****TIMER");

    for (size_t i = 0; i < 5; ++i){
        for (size_t j = 0; j < 10; ++j){
            std::cout << "*";
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            tt.getTime("here--- "+std::to_string(j));
        }
        std::cout << std::endl;
        t.getTime("there+++ "+std::to_string(i));
        if (i == 3) t.resetTime("3rd iteration");
    }
}
    return 0;
}
