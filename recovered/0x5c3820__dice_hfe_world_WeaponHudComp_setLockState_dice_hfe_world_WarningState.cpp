// FUNCTION: BF2 0x5c3820
namespace dice { namespace hfe { namespace world {

typedef void (*FnOne)(void*, void*);

#define BFSOUND (*(void**)0x10aa288)
#define BFSOUNDVT (*(void***)BFSOUND)

struct WarnState {
    char pad0[0x10];
    void* m_h1;
    char pad1[0x20 - 0x18];
    int m_state;

    void setLockState(int s);
};

void WarnState::setLockState(int s)
{
    if (m_state == s)
        return;
    if (s == 0) {
        if (m_state != 0) {
            ((FnOne)BFSOUNDVT[0x60 / 8])(BFSOUND, (char*)m_h1 + 0x38);
            ((FnOne)BFSOUNDVT[0x60 / 8])(BFSOUND, (char*)m_h1 + 0x40);
        }
    } else if (s == 2) {
        if (m_state != 2) {
            ((FnOne)BFSOUNDVT[0x60 / 8])(BFSOUND, (char*)m_h1 + 0x38);
            ((FnOne)BFSOUNDVT[0x58 / 8])(BFSOUND, (char*)m_h1 + 0x40);
        }
    } else if (s == 1) {
        if (m_state != 1) {
            ((FnOne)BFSOUNDVT[0x60 / 8])(BFSOUND, (char*)m_h1 + 0x40);
            ((FnOne)BFSOUNDVT[0x58 / 8])(BFSOUND, (char*)m_h1 + 0x38);
        }
    }
    m_state = s;
}

} } }
