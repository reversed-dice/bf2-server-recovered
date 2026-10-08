// FUNCTION: BF2 0x4354d0
// BF2_FLAGS: -fno-strict-aliasing

namespace dice { namespace hfe {

extern void* game;
extern void* eventManager;

namespace world { extern void* playerManager; }

class VoipPlayerMuteEvent
{
public:
    char pad_00[0x10];
    unsigned char m_10;
    unsigned char m_11;
    unsigned char m_12;
    bool executeClient();
};

bool VoipPlayerMuteEvent::executeClient()
{
    if (!((bool (*)(void*))*(void**)((char*)*(void**)dice::hfe::game + 0x1c0))(dice::hfe::game)) {
        void* p = ((void* (*)(void*))*(void**)((char*)*(void**)dice::hfe::world::playerManager + 0x60))
            (dice::hfe::world::playerManager);
        if (p == 0)
            return false;
        if (((unsigned int (*)(void*))*(void**)((char*)*(void**)p + 0xa8))(p) != m_12)
            return false;

        unsigned char data[8];
        unsigned int id = m_11;
        unsigned char flags = m_10;
        data[0] = flags;
        *(unsigned int*)(data + 4) = id;


        ((void (*)(void*, int, int, float, void*))*(void**)((char*)*(void**)dice::hfe::eventManager + 0x28))
            (dice::hfe::eventManager, 2, 0x3b, 0.0f, &data);

        void* q = ((void* (*)(void*, unsigned char))*(void**)((char*)*(void**)dice::hfe::world::playerManager + 0x40))
            (dice::hfe::world::playerManager, m_11);
        if (q != 0)
            ((void (*)(void*, unsigned char))*(void**)((char*)*(void**)q + 0x510))(q, m_10);
    }
    return true;
}

} }
