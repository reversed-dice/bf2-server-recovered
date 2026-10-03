// FUNCTION: BF2 0x78c2b0

extern "C" unsigned long long
f_78c2b0(long param_1,unsigned int param_2)
{
  unsigned long long uVar1;
  
  uVar1 = 0;
  switch(param_2) {
  case 0:
    return *(unsigned long long *)(param_1 + 0x30);
  case 1:
    return *(unsigned long long *)(param_1 + 0x38);
  case 2:
    return *(unsigned long long *)(param_1 + 0x40);
  case 3:
    return *(unsigned long long *)(param_1 + 0x48);
  case 4:
    return *(unsigned long long *)(param_1 + 0x50);
  case 5:
    uVar1 = *(unsigned long long *)(param_1 + 0x58);
  }
  return uVar1;
}
// REVERSED_FUNCTION: dice_hfe_ai_AIObject_getPlugIn_dice_hfe_ai_IAIObjectFlags_const (0x78c2b0)
