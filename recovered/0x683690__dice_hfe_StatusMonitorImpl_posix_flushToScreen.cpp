// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x683690
extern "C" int wtouchln(void* win, int y, int n, int attr);
extern "C" int wrefresh(void* win);
extern "C" void* curscr;

struct Bf2Window { short cury; short curx; short maxy; short maxx; };

namespace dice { namespace hfe {

class StatusMonitorImpl_posix {
public:
    char _pad0[8];
    int m_counter;
    char _pad1[0xc];
    void* m_screen;
    void flushToScreen();
};

void StatusMonitorImpl_posix::flushToScreen()
{
    void* sc = m_screen;
    if (sc == 0) return;
    int c = m_counter + 1;
    m_counter = c;
    if (c <= 9) {
        wrefresh(sc);
        return;
    }
    m_counter = 0;
    int n = ((Bf2Window*)sc)->maxy + 1;
    wtouchln(sc, 0, n, 1);
    wrefresh(curscr);
}

} }
