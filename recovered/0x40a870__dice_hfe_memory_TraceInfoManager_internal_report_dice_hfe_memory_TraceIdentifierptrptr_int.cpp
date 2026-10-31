// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x40a870
#include <map>
#include <string>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

namespace dice { namespace hfe { namespace memory {

struct TraceIdentifier
{
    TraceIdentifier();
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
    static TraceIdentifier* m_traceIdentifiers[0x800];
    static char* internal_report(TraceIdentifier** ids, int count);
};

char g_resultString[0x10000];

int compareResources(const void* a, const void* b);
char* convertToReadableString(int value, bool fresh);

char* TraceInfoManager::internal_report(TraceIdentifier** ids, int count)
{
    if (count <= 0)
        return 0;

    unsigned long spin = 0x7ff;
    do {
        --spin;
    } while (spin != (unsigned long)-1);

    struct Pair { unsigned int m_size; int m_id; };
    Pair pairs[0x800];
    int total = 0;
    for (int i = 0; i < count; ++i) {
        unsigned int size = ids[i]->f110;
        pairs[i].m_id = i;
        total += size;
        pairs[i].m_size = size;
    }

    qsort(pairs, count, 8, compareResources);

    std::map<std::string, TraceIdentifier> modules;

    sprintf(g_resultString, "Total bytes allocated:%u\n", total);
    char* out = g_resultString + strlen(g_resultString);

    for (int k = 0; k < count; ++k) {
        int id = pairs[k].m_id;
        TraceIdentifier* t = ids[id];
        if (t->f10c != 0 && t->f110 != 0) {
            char prefix[0x400];
            const char* p = t->m_name;
            if (*p != 0) {
                int index = 0;
                for (;;) {
                    char c = *p;
                    if (c == '/' || c == '\\') {
                        int len = (int)(p - t->m_name);
                        strncpy(prefix, t->m_name, len);
                        prefix[len] = 0;
                        std::string key(prefix);
                        std::map<std::string, TraceIdentifier>::iterator it = modules.find(key);
                        if (it != modules.end()) {
                            std::string a1;
                            TraceIdentifier& e = it->second;
                            e.f110 += t->f110;
                            e.f10c += t->f10c;
                            (void)a1;
                        } else {
                            TraceIdentifier entry;
                            entry.f110 += t->f110;
                            entry.f10c += t->f10c;
                            entry.f114 = index;
                            modules.insert(std::make_pair(key, entry));
                        }
                        ++index;
                    }
                    ++p;
                    if (*p == 0)
                        break;
                }
            }
            const char* bytes = convertToReadableString(t->f110, true);
            sprintf(out, "Bytes:%s(%s) MinBlock:%s MaxBlock:%s NumAllocs:%s(%s)  %s  [%d]\n",
                    bytes,
                    convertToReadableString(t->f104, false),
                    convertToReadableString(t->f114, false),
                    convertToReadableString(t->f118, false),
                    convertToReadableString(t->f10c, false),
                    convertToReadableString(t->f108, false),
                    t->m_name, id);
            out += strlen(out);
        }
    }
    *out = 0;
    return g_resultString;
}

} } }
