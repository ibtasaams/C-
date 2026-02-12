#pragma once
#include <chrono>
class Timer{
public:
    void start();
    double elapsedSeconds() const;
    bool isRunning() const;
private: 
    bool running = false;
    std::chrono::steady_clock::time_point startTime;
};
