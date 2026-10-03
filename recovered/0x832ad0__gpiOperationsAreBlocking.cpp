// FUNCTION: BF2 0x832ad0
struct Op {
    int field0;       // offset 0x00
    char _pad[0xc];   // offset 0x04
    int field4;       // offset 0x10
    char _pad2[0x24]; // offset 0x14 (36 bytes)
    Op* next;         // offset 0x38
};

extern "C" int gpiOperationsAreBlocking(void* connection)
{
    Op* op = *(Op**)(*(long*)connection + 0x4a8);
    while (op != 0) {
        if (op->field4 != 0 && op->field0 != 3)
            return 1;
        op = op->next;
    }
    return 0;
}
