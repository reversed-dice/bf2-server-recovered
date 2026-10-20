// FUNCTION: BF2 0x6834d0
// BF2_FLAGS: -fno-tree-pre
extern "C" int wgetch(void* win);

namespace dice { namespace hfe {

class IGameSystem {
public:
    virtual void _v00();
    virtual void _v08();
    virtual void _v10();
    virtual void _v18();
    virtual void _v20();
    virtual void _v28();
    virtual void _v30();
    virtual double getTime();
};

extern IGameSystem* g_system;

namespace io {

class Console {
public:
    virtual void _c00();
    virtual void _c08();
    virtual void _c10();
    virtual void _c18();
    virtual void _c20();
    virtual void _c28();
    virtual void update(char ch, int code);
};

extern Console* mainConsole;

}

class StatusMonitorImpl {
public:
    StatusMonitorImpl();
    virtual ~StatusMonitorImpl();
};

class StatusMonitorImpl_posix : public StatusMonitorImpl {
public:
    StatusMonitorImpl_posix();
    virtual ~StatusMonitorImpl_posix();
    virtual bool shouldUpdate(bool force);
    virtual void clearScreen();
    virtual void getDimensions(int&, int&);
    virtual void outputString(int, int, const void*);
    virtual void flushToScreen();

    int m_8;
    double m_10;
    void* m_win;
    void* m_20;
};

bool StatusMonitorImpl_posix::shouldUpdate(bool force)
{
    if (m_win == 0)
        return false;

    double now = g_system->getTime();

    if (!force) {
        int key = wgetch(m_win);
        if (key != -1) {
            int code = key;
            switch (key) {
            case 8:
            case 0x107:
            case 0x7f:
                code = 8;
                break;
            case 0xa:
            case 0xd:
            case 0x157:
                code = 0xd;
                break;
            case 0x102:
                code = 0xe;
                break;
            case 0x103:
                code = 0x10;
                break;
            case 0x152:
                code = 6;
                break;
            case 0x153:
                code = 2;
                break;
            case 0x19a:
                goto done;
            default:
                break;
            }
            if (code != 0)
                io::mainConsole->update((char)code, code);
        }
    }

done:
    if (now - m_10 > 0.5) {
        m_10 = now;
        return true;
    }
    return false;
}

} }
