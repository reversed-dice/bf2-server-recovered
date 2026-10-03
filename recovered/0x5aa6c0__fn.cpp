// FUNCTION: BF2 0x5aa6c0
int dice_hfe_world_SpriteParticleSystemTemplate_getAnimationFrameCountX_const(void* self)
{ void* p = *(void**)((char*)self + 0x80); void* vt = *(void**)p;
  int (*fn)(void*) = *(int(**)(void*))((char*)vt + 0x4c0); return fn(p); }
