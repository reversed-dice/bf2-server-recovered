// FUNCTION: BF2 0x435ee0

extern "C" long f_435ee0(unsigned long long *param_1)
{
  unsigned long long *puVar1;
  long lVar2;
  
  lVar2 = 0;
  for (puVar1 = (unsigned long long *)*param_1; param_1 != puVar1; puVar1 = (unsigned long long *)*puVar1) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}
// REVERSED_FUNCTION: dice_hfe_ActionBuffer_size_const (0x435ee0)
