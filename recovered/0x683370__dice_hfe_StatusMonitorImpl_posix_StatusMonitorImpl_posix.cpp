// FUNCTION: BF2 0x683370
extern "C" void* initscr();
extern "C" int cbreak();
extern "C" int noecho();
extern "C" int nonl();
extern "C" int intrflush(void*, int);
extern "C" void* newwin(int, int, int, int);
extern "C" int nodelay(void*, int);
extern "C" int keypad(void*, int);
extern "C" int atexit(void (*)());
extern "C" void* stdscr;

namespace dice { namespace hfe {

class StatusMonitorImpl {
public:
    StatusMonitorImpl();
    virtual ~StatusMonitorImpl();
};

class StatusMonitorImpl_posix : public StatusMonitorImpl {
public:
    StatusMonitorImpl_posix();
    virtual ~StatusMonitorImpl_posix();
    virtual void shouldUpdate(bool);
    virtual void clearScreen();
    virtual void getDimensions(int&, int&);
    virtual void outputString(int, int, const void*);
    virtual void flushToScreen();

    int m_8;
    double m_10;
    void* m_win;
    void* m_20;
};

namespace {
void* posix_impl;
void atexit_cleanup_statusmonitor();
}

StatusMonitorImpl_posix::StatusMonitorImpl_posix()
{
    m_8 = 0;
    m_10 = -1000.0;
    m_win = 0;
    if (initscr() != 0) {
        cbreak();
        noecho();
        nonl();
        intrflush(stdscr, 0);
        m_win = newwin(0, 0, 0, 0);
        if (m_win != 0) {
            nodelay(m_win, 1);
            keypad(m_win, 1);
        }
        atexit(atexit_cleanup_statusmonitor);
        posix_impl = this;
    }
}

} }
