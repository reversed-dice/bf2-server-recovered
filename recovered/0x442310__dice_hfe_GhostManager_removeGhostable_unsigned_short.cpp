// BF2_FLAGS: -fno-reorder-blocks
// FUNCTION: BF2 0x442310
namespace dice { namespace hfe {

struct GhostableNode {
    GhostableNode* m_next;
    unsigned int m_id;
};

class GhostManager {
public:
    char _pad[0x40];
    GhostableNode** m_buckets;  // +0x40
    unsigned int m_bucketCount; // +0x48
    char _pad2[0x2060 - 0x4c];
    bool m_dirty;               // +0x2060

    void removeGhostable(unsigned short id);
};

void GhostManager::removeGhostable(unsigned short id)
{
    GhostableNode** prev = &m_buckets[(unsigned int)id % m_bucketCount];
    GhostableNode* curr = *prev;
    if (__builtin_expect(curr != 0, 1)) {
        while (curr->m_id != id) {
            prev = &curr->m_next;
            curr = curr->m_next;
            if (!curr) goto done;
        }
        *prev = curr->m_next;
        delete curr;
    }
done:
    m_dirty = true;
}

} }
