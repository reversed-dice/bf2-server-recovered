// FUNCTION: BF2 0x52e560
// ObjectSpawner::setControledById 0x52e560 — guard store
namespace dice { namespace hfe { namespace world {

void setControledById(void* self, int id) {
    if (*(int*)((char*)self + 0x278) != id)
        *(int*)((char*)self + 0x278) = id;
}

}}}
