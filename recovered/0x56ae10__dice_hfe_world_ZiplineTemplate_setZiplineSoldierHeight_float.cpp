// FUNCTION: BF2 0x56ae10
// ZiplineTemplate::setZiplineSoldierHeight 0x56ae10 — global ptr + self
namespace dice { namespace hfe { namespace world {

void setZiplineSoldierHeight(void* self, float h) {
    *(float*)(*(void**)0x108f4f0) = h;
    *(float*)((char*)self + 0x1e4) = h;
}

}}}
