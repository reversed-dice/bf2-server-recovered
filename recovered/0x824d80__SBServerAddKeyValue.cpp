// FUNCTION: BF2 0x824d80
struct KeyValuePair { void* key; void* value; };
extern "C" void* SBRefStr(int ref, const char* str);
extern "C" void TableEnter(void* table, KeyValuePair* kv);

extern "C" void SBServerAddKeyValue(void* server, const char* keyname, const char* value)
{
    KeyValuePair k;
    k.key = SBRefStr(0, keyname);
    k.value = SBRefStr(0, value);
    TableEnter(*(void**)((char*)server + 0x18), &k);
}
