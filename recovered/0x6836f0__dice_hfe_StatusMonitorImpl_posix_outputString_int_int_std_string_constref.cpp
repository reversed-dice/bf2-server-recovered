// FUNCTION: BF2 0x6836f0
extern "C" int wmove(void*, int, int);
extern "C" int waddnstr(void*, const char*, int);

namespace dice { namespace hfe {

class StatusMonitorImpl {
public:
    virtual ~StatusMonitorImpl();
    char _pad[0x10];
};

class StatusMonitorImpl_posix : public StatusMonitorImpl {
public:
    void* m_win;                // +0x18

    void outputString(int x, int y, const void* s);
};

void StatusMonitorImpl_posix::outputString(int x, int y, const void* s)
{
    if (m_win != 0) {
        if (wmove(m_win, y, x) != -1) {
            waddnstr(m_win, *(const char**)s, -1);
            return;
        }
    }
    return;
}

} }
