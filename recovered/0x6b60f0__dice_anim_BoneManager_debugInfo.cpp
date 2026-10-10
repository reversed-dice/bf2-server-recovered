// BF2_FLAGS: -fcrossjumping
// FUNCTION: BF2 0x6b60f0
namespace dice { namespace anim {

class BoneManager {
public:
    char* m_begin;   // +0x0
    char* m_end;     // +0x8

    int debugInfo();
};

int BoneManager::debugInfo()
{
    int count = (int)((m_end - m_begin) >> 3);
    for (int i = 0; i < count; i++)
        ;
    return count;
}

}}
