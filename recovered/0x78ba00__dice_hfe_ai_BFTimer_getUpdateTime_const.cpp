// FUNCTION: BF2 0x78ba00
#include <sys/time.h>

namespace dice { namespace hfe { namespace ai {

struct TimeSource {
    long long m_sec;
    long long m_usec;
};

double getUpdateTime_0x78ba00(void* self) {
    TimeSource* p = *(TimeSource**)((char*)self + 0x18);
    timeval tv;
    gettimeofday(&tv, 0);
    double now = (double)tv.tv_sec + (double)tv.tv_usec * 1e-6;
    double start = (double)p->m_sec + (double)p->m_usec * 1e-6;
    return now - start;
}

} } }
