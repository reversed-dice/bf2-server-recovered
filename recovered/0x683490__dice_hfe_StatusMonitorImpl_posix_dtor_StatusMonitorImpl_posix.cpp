// FUNCTION: BF2 0x683490
namespace dice { namespace hfe {

extern "C" void curses_delwin_407fb8(void* win);
extern "C" void curses_endwin_407538(void);
extern "C" void StatusMonitorImpl_dtor_4ec360(void* self);
extern "C" void operator_delete_4085b8(void* p);

class StatusMonitorImpl_posix {
public:
    void* m_vtbl;
    char  _pad0[0x10];
    void* m_window;     // +0x18
    ~StatusMonitorImpl_posix();
};

StatusMonitorImpl_posix::~StatusMonitorImpl_posix()
{
    m_vtbl = (void*)0xb8c8d0;
    void* w = m_window;
    if (w != 0) {
        curses_delwin_407fb8(w);
        curses_endwin_407538();
    }
    *(void**)0x01092c00 = 0;
    StatusMonitorImpl_dtor_4ec360(this);
    operator_delete_4085b8(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_StatusMonitorImpl_posix_dtor_StatusMonitorImpl_posix (0x683490)
