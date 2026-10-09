// FUNCTION: BF2 0x40a340
#include <string.h>
#include <strings.h>

namespace dice { namespace hfe { namespace memory {

class TraceIdentifier {
public:
    TraceIdentifier();
    char m_name[0x100];
    char m_pad[0x1c];
};

class TraceInfoManager {
public:
    static int getIdentifier(const char* name, TraceIdentifier** ids, int& count);
};

int TraceInfoManager::getIdentifier(const char* name, TraceIdentifier** ids, int& count)
{
    int n = count;
    for (int i = 0; i < n; ++i) {
        if (strcasecmp(name, ids[i]->m_name) == 0)
            return i;
    }
    if (n == 0x800) {
        strncpy(ids[0]->m_name, "ERROR. TOO MANY IDENTIFIERS", 0x100);
        return 0;
    }
    ids[n] = new TraceIdentifier;
    strncpy(ids[count]->m_name, name, 0x100);
    int id = count; count = id + 1; return id;
}

} } }
