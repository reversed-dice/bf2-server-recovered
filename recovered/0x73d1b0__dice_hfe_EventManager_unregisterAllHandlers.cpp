// FUNCTION: BF2 0x73d1b0
extern "C" void _ZdlPv(void* p);

struct EhNode {
    void*   pad0;
    EhNode* next;
};

struct EventManagerPart {
    char    pad[0x28];
    EhNode* buckets[12];
};

void dice_hfe_EventManager_unregisterAllHandlers(EventManagerPart* self)
{
    for (int i = 0; i < 12; ++i) {
        while (self->buckets[i] != 0) {
            EhNode* n = self->buckets[i];
            self->buckets[i] = n->next;
            _ZdlPv(n);
        }
    }
}
// REVERSED_FUNCTION: dice_hfe_EventManager_unregisterAllHandlers (0x73d1b0)
