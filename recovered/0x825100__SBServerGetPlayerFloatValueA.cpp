// FUNCTION: BF2 0x825100
extern "C" double SBServerGetFloatValueA(const char* server, const char* key, double value);
extern "C" int sprintf(char*, const char*, ...);

extern "C" double SBServerGetPlayerFloatValueA(const char* server, int index, const char* key, double value)
{
    char tempkey[128];
    sprintf(tempkey, "%s_%d", key, index);
    return SBServerGetFloatValueA(server, tempkey, value);
}
