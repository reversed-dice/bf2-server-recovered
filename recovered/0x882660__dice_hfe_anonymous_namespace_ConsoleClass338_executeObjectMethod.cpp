// FUNCTION: BF2 0x882660
// BF2_FLAGS: -fno-tree-pre
#include <string>

namespace dice { namespace hfe {
extern void* game;
extern unsigned int IID_IGame;
}}

void* fn_0x882660(void* self) {
  void* r = 0;
  if (*(int*)((char*)self + 0x30) == 0) {
    *(char*)((char*)self + 0x108) = 1;
    void* g = dice::hfe::game;
    void* p = 0;
    if (g) {
      void* (*qi)(void*, unsigned int) =
          (void* (*)(void*, unsigned int))(*(void***)g)[0x18 / 8];
      p = qi(g, dice::hfe::IID_IGame);
    }
    ((std::string*)((char*)self + 0x110))
        ->assign(((std::string (*)(void*))(*(void***)p)[0x158 / 8])(p));
    r = (char*)self + 0x110;
  }
  return r;
}
