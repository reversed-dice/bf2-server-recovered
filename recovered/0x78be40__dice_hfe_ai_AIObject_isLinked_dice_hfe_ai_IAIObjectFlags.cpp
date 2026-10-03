// FUNCTION: BF2 0x78be40
// AIObject::isLinked 0x78be40 — flag global indexé
namespace dice { namespace hfe { namespace ai {

unsigned char isLinked(int flags) {
    return *(unsigned char*)(0xf68c68 + (long)flags);
}

}}}
