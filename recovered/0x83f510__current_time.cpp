// FUNCTION: BF2 0x83f510
#include <sys/time.h>
extern "C" int current_time()
{
    struct timeval tv;
    gettimeofday(&tv, 0);
    return (int)(tv.tv_sec * 1000 + tv.tv_usec / 1000);
}
