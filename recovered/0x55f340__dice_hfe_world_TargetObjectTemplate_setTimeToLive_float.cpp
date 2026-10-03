// FUNCTION: BF2 0x55f340
// TargetObjectTemplate::setTimeToLive 0x55f340 — mul inverse
namespace dice { namespace hfe { namespace world {

void setTimeToLive(void* self, float ttl) {
    *(float*)((char*)self + 0x1f8) = ttl;
    long tick = (long)(ttl * *(float*)0xb2efc4);
    *(int*)((char*)self + 0x1fc) = (int)tick + 1;
}

}}}
