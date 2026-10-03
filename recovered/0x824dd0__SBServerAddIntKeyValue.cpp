// FUNCTION: BF2 0x824dd0
extern "C" int sprintf_like(void*, const char*, ...);
extern "C" void setattr_call(void*, void*, void*);
void fn_0x824dd0(void* self, void* name, int value) {
    char buf[0x18];
    sprintf_like(buf, (const char*)0xb97f28, value);
    setattr_call(self, name, buf);
}
// REVERSED_FUNCTION: SBServerAddIntKeyValue (0x824dd0)
