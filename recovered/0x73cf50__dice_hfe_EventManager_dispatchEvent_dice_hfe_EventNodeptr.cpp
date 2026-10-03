// FUNCTION: BF2 0x73cf50
// dice::hfe::EventManager::dispatchEvent(EventNode*) -- 0x73cf50
//
// Bumps the reentrancy counter, resolves the sender (the node itself, or the
// forwarded sender stored at +0x28/+0x30 when the node reports -1), stamps the
// current dispatch stamp on the node, and calls every handler in the chain for
// that event slot.

typedef int __attribute__((may_alias)) int_ma;
typedef int  (*Fn18)(void*);
typedef void (*Fn0)(void*, int, int, void*, void*);

void dispatchEvent_73cf50(void* self, void* node)
{
    char* s = (char*)self;
    char* n = (char*)node;

    // may_alias: the counter bump must stay ahead of the node's vtable load,
    // a plain int RMW lets GCC hoist that load above it.
    *(int_ma*)(s + 0x10) += 1;

    int sender;
    void* origin;
    if ((*(Fn18*)(*(char**)node + 0x18))(node) == -1) {
        sender = *(int*)(n + 0x28);
        origin = *(void**)(n + 0x30);
    } else {
        sender = (*(Fn18*)(*(char**)node + 0x18))(node);
        origin = node;
    }

    int slot = *(int*)(n + 0x8);
    char* entry = *(char**)(s + 0x28 + (long)slot * 8);
    *(void**)(n + 0x10) = *(void**)(s + 0x20);

    if (entry != 0) {
        while (true) {
            void* handler = *(void**)entry;
            (*(Fn0*)(*(char**)handler))(handler, slot, sender, node, origin);
            entry = *(char**)(entry + 8);
            if (entry == 0) break;
            slot = *(int*)(n + 0x8);
        }
    }

    *(int_ma*)(s + 0x10) -= 1;
}
// REVERSED_FUNCTION: dice_hfe_EventManager_dispatchEvent_dice_hfe_EventNodeptr (0x73cf50)
