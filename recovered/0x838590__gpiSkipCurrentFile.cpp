// FUNCTION: BF2 0x838590
extern "C" void gpiSkipFile(void*, void*, int, int);
void gpiSkipCurrentFile(void* arg0, void* self, int arg2) {
    int field = *(int*)((char*)self+0x30);
    gpiSkipFile(arg0, self, field, arg2);
    (*(int*)((char*)self+0x30))++;
}
// REVERSED_FUNCTION: gpiSkipCurrentFile (0x838590)
