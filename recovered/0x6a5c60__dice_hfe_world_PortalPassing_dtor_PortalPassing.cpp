// FUNCTION: BF2 0x6a5c60
#include <vector>

namespace dice { namespace hfe { namespace world {

extern void release_6a4f50(void* self, void* handle);

struct Passing {
    char  _pad[0x10];
    void* m_handle;      // 0x10
    ~Passing() { release_6a4f50(this, m_handle); }
};

class PortalPassing {
public:
    virtual ~PortalPassing();
    char _pad0[0x18];               // 0x08 .. 0x20
    std::vector<Passing*> m_items;  // 0x20
};

PortalPassing::~PortalPassing()
{
    for (std::vector<Passing*>::iterator it = m_items.begin();
         it != m_items.end(); ++it)
        delete *it;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_PortalPassing_dtor_PortalPassing (0x6a5c60)
