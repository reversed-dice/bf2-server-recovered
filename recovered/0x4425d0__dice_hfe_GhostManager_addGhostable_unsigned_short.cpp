// FUNCTION: BF2 0x4425d0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
namespace dice { namespace hfe {

class GhostObject {
public:
    char pad[0x58];
    char m_used;
};

class GhostManager
{
public:
    struct Entry
    {
        Entry* next;
        unsigned int key;
        char used;
    };

    struct HashTable
    {
        Entry** buckets;
        unsigned int count;
    };

    char m_pad0[0x40];
    HashTable m_hash;
    char m_pad50[0x2060 - 0x50];
    char m_dirty;

    GhostObject* findGhostObjectInHash(unsigned short id);
    void addGhostable(unsigned short id);
};

void GhostManager::addGhostable(unsigned short id)
{
    HashTable& h = m_hash;
    unsigned int idx = id % h.count;
    Entry* e = h.buckets[idx];
    while (e)
    {
        if (e->key == id)
            goto found;
        e = e->next;
    }
    {
        Entry* n = new Entry;
        Entry** slot = &h.buckets[idx];
        Entry* next = *slot;
        n->key = id;
        n->used = 1;
        n->next = next;
        *slot = n;
    }
found:
    GhostObject* o = findGhostObjectInHash(id);
    if (o)
        o->m_used = 1;
    m_dirty = 1;
}

} }
