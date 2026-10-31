// FUNCTION: BF2 0x40a640
namespace dice { namespace hfe { namespace memory {

struct TraceIdentifier {
    char m_name[0x104];
    int f104;
    int f108;
    int f10c;
    int f110;
    int f114;
    int f118;
};

class TraceInfoManager {
public:
    static TraceIdentifier* m_resourceIdentifiers[0x800];
    static int m_resourceIdentifierCount;
    static int getIdentifier(const char*, TraceIdentifier**, int&);
    static void resourceAllocate(int&, const char*, int);
};

void TraceInfoManager::resourceAllocate(int& id, const char* name, int size)
{
    if (id == -1) {
        id = getIdentifier(name, m_resourceIdentifiers, m_resourceIdentifierCount);
        if (id < 0)
            return;
    }

    TraceIdentifier* t = m_resourceIdentifiers[id];
    int count = ++t->f10c;
    int bytes = t->f110 + size;
    t->f110 = bytes;

    if (size < 0)
        goto tail;
    if (size >= t->f114) {
        int old0 = t->f104;
        if (old0 != 0)
            goto after;
    }
    t->f114 = size;
after:
    if (size > t->f118)
        t->f118 = size;
tail:
    {
        int old = t->f104;
        if (count > t->f108)
            t->f108 = count;
        if (old < bytes)
            t->f104 = bytes;
    }
}

} } }
