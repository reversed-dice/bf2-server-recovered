// FUNCTION: BF2 0x83d150
struct GSTimer {
    unsigned int start;
    unsigned int time;
    int count;
    int inuse;
};

extern "C" GSTimer gTimers[];
extern "C" unsigned int current_time_hires(int, ...);

void gsiLargeIntTimerExit(unsigned int timer) {
    if (gTimers[timer].inuse == 1) {
        unsigned int t = gTimers[timer].time;
        unsigned int now = current_time_hires(timer);
        gTimers[timer].inuse = 0;
        gTimers[timer].time = t + (now - gTimers[timer].start);
    }
}
