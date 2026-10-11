// FUNCTION: BF2 0x824e70
#include <assert.h>
struct KeyValuePair { const char* key; const char* value; };
extern "C" KeyValuePair* TableLookup(void* table, KeyValuePair* key);

extern "C" const char* SBServerGetStringValueA(void* server, const char* keyname, const char* def)
{
    KeyValuePair k;
    KeyValuePair* kv;
#line 153 "External/GameSpy/serverbrowsing/sb_server.c"
    assert(server);
    k.key = keyname;
    kv = TableLookup(*(void**)((char*)server + 0x18), &k);
    if (kv) return kv->value;
    return def;
}
