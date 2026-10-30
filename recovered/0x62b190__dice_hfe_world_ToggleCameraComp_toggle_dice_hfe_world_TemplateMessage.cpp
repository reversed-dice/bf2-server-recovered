// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing -fno-tree-pre
// FUNCTION: BF2 0x62b190
// dice::hfe::world::ToggleCameraComp::toggle(dice::hfe::world::TemplateMessage)

namespace dice { namespace hfe { namespace world {

typedef char     (*Fn78)(void*);
typedef void*    (*Fn18)(void*, unsigned);
typedef void*    (*Fn88)(void*);
typedef unsigned (*Fn58)(void*);
typedef void     (*Fn90)(void*, int);
typedef void*    (*FnA0)(void*);
typedef void     (*Fn30)(void*, int, int, int);
typedef void     (*FnEvent)(void*, int, int, void*, float);

class ZoomComp {
public:
    virtual void _v0();
    bool is1P() const;
};

class ToggleCameraComp : public ZoomComp {
public:
    unsigned char _pad[0x10];
    void* m_firstChild;
    unsigned char _pad2[0x14];
    int m_0x34;
    void* m_0x38;
    void* m_0x40;
    void toggle(int msg);
};

void ToggleCameraComp::toggle(int msg)
{
    if (msg != 7)
        return;

    void* holder = m_0x38;
    void* owner = holder != 0 ? *(void**)((char*)holder + 8) : 0;
    if (owner != 0 && (*(Fn78*)(*(char**)owner + 0x78))(owner) != 0) {
        void* itf = 0;
        void* p = m_firstChild;
        while (p != 0) {
            itf = (*(Fn18*)(*(char**)p + 0x18))(p, *(unsigned*)0xc7ce6c);
            if (itf != 0)
                break;
            p = *(void**)((char*)p + 0x50);
        }
        (*(Fn90*)(*(char**)itf + 0x90))(itf, m_0x34);
        m_0x34 = 0;
    } else if (*(int*)((char*)m_0x40 + 0x1c) != -1) {
        void* itf = 0;
        void* p = m_firstChild;
        while (p != 0) {
            itf = (*(Fn18*)(*(char**)p + 0x18))(p, *(unsigned*)0xc7ce6c);
            if (itf != 0)
                break;
            p = *(void**)((char*)p + 0x50);
        }
        if (itf != 0) {
            int id = *(int*)((char*)m_0x40 + 0x1c);
            void* cam = (*(Fn88*)(*(char**)itf + 0x88))(itf);
            if (id == (int)(*(Fn58*)(*(char**)cam + 0x58))(cam)) {
                (*(Fn90*)(*(char**)itf + 0x90))(itf, m_0x34);
                cam = (*(Fn88*)(*(char**)itf + 0x88))(itf);
                (*(Fn30*)(*(char**)cam + 0x30))(cam, 1, 0, 0);
                m_0x34 = 0;
            } else {
                cam = (*(Fn88*)(*(char**)itf + 0x88))(itf);
                m_0x34 = (int)(*(Fn58*)(*(char**)cam + 0x58))(cam);
                (*(Fn90*)(*(char**)itf + 0x90))(itf, *(int*)((char*)m_0x40 + 0x1c));
                if (*(int*)((char*)m_0x40 + 0x20) != 0) {
                    cam = (*(Fn88*)(*(char**)itf + 0x88))(itf);
                    (*(Fn30*)(*(char**)cam + 0x30))(cam, *(int*)((char*)m_0x40 + 0x20), 0, 0);
                }
            }
        }
    }

    void* node = m_firstChild;
    void* zoom = *(void**)((char*)node + 0xb8);
    if (!is1P())
        return;
    if (zoom == 0)
        return;
    void* st = (*(FnA0*)(*(char**)zoom + 0xa0))(zoom);
    if (*(int*)((char*)st + 0x2c) == -1)
        return;
    ((FnEvent)(*(void***)*(void**)0x10b3730)[0x28 / 8])(*(void**)0x10b3730, 2, 0x1f, this, 0.0f);
}

} } }
