// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x69bbc0
#include <stddef.h>
namespace dice { namespace hfe { namespace world {
struct QuadTreeCuller {
  virtual int dummy(){return 0;}
  QuadTreeCuller();
};
QuadTreeCuller::QuadTreeCuller() {
  *(int*)((char*)this + 0x8) = 1;
  *(int*)((char*)this + 0xc) = 0;
  struct N4 { int m0, m1, m2, m3; };
  N4* p = reinterpret_cast<N4*>((char*)this + 0x50);
  for (size_t i = 0; i < 6; ++i) { p[i].m0=0; p[i].m1=0; p[i].m2=0; }
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
