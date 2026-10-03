// FUNCTION: BF2 0x83f5a0
extern "C" int real_usleep(unsigned int usec, ...);
extern "C" int msleep(unsigned int ms) {
    return real_usleep(ms*1000);
}
// REVERSED_FUNCTION: msleep (0x83f5a0)
