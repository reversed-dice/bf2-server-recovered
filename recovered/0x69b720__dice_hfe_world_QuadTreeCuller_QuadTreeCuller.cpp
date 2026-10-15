// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x69b720
#include <stddef.h>
namespace dice { namespace hfe { namespace world {
struct QuadTreeCuller {
  virtual int dummy(){return 0;}
  QuadTreeCuller();
};
QuadTreeCuller::QuadTreeCuller() {
  *(int*)((char*)this + 0x8) = 1;
  *(int*)((char*)this + 0xc) = 0;
  int* p = (int*)((char*)this + 0x50);
  for (size_t i = 0; i < 6; ++i) {
    p[0] = 0; p[1] = 0; p[2] = 0;
    p += 4;
  }
  int* p2 = (int*)((char*)this + 0xb4);
  p2[0]=0; p2[1]=0; p2[2]=0;
  p2=(int*)((char*)this+0xc0); p2[0]=0;p2[1]=0;p2[2]=0;
  p2=(int*)((char*)this+0xcc); p2[0]=0;p2[1]=0;p2[2]=0;
  *(int*)((char*)this + 0xd8)=0;*(int*)((char*)this + 0xdc)=0;
  *(int*)((char*)this + 0xe0)=0;*(int*)((char*)this + 0xe4)=0;
  *(long*)((char*)this + 0xf8)=0;
  *(int*)((char*)this + 0x100)=0;
}
} } }
