// FUNCTION: BF2 0x7e5530
#include <string.h>

struct PWRecord {
    char const* name;
    int kind;
    unsigned int size;
};

class MemStream {
public:
    void beginRead(void* buffer, unsigned int offset, unsigned int size);
private:
    char pad_0[0x18];
    char* m_base;
};

void MemStream::beginRead(void* buffer, unsigned int offset, unsigned int size)
{
    memcpy(buffer, (void*)(offset + (unsigned long)m_base), (unsigned long)size);
    PWRecord* p = new PWRecord;
    p->name = "PW~";
    p->kind = 1;
    p->size = size;
}
