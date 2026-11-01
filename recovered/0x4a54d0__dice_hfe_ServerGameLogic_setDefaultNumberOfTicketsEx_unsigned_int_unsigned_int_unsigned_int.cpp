// FUNCTION: BF2 0x4a54d0
#include <utility>

namespace dice { namespace hfe {

struct TicketMap { char _pad[0x30]; };

extern TicketMap m_startTicketsPerSetup[2];

extern void* rb_find(void* tree, unsigned int const* key);
extern std::pair<void*, bool> rb_insert_unique(void* tree, void const* value);

struct KV { unsigned int first; unsigned int second; };

class ServerGameLogic {
public:
    void setDefaultNumberOfTicketsEx(unsigned int key, unsigned int type, unsigned int value);
};

void ServerGameLogic::setDefaultNumberOfTicketsEx(unsigned int key, unsigned int type, unsigned int value)
{
    if (type - 1 > 1)
        return;
    TicketMap* tree = &m_startTicketsPerSetup[type - 1];
    void* node = rb_find(tree, &key);
    if ((char*)tree + 8 != (char*)node) {
        *(unsigned int*)((char*)node + 0x24) = value;
        return;
    }
    KV kv;
    kv.first = key;
    kv.second = value;
    std::pair<void*, bool> r = rb_insert_unique(tree, &kv);
    (void)r;
}

} }
