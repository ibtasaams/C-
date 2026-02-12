#include "Timer.h"

void Timer::start() {
    if (!running) {
        startTime = std::chrono::steady_clock::now();
        running = true;
    }
}

double Timer::elapsedSeconds() const {
    if (!running) return 0.0;
    auto now = std::chrono::steady_clock::now();
    std::chrono::duration<double> diff = now - startTime;
    return diff.count();
}

bool Timer::isRunning() const {
    return running;
}
