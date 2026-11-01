// from api 93.33%; also: petits3-2026-08-13 82.76%
// FUNCTION: BF2 0x83d110
struct GSTimer {
    unsigned int start;
    unsigned int time;
    int count;
    int inuse;
};

extern "C" GSTimer gTimers[];
extern "C" unsigned int current_time_hires(int, ...);

void gsiLargeIntTimerEnter(unsigned int timer) {
    if (!gTimers[timer].inuse)
    {
        gTimers[timer].count++;
        gTimers[timer].start = current_time_hires(timer);
        gTimers[timer].inuse = 1;
    }
}
