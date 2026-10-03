// FUNCTION: BF2 0x826460
// BF2_FLAGS: -fno-strict-aliasing

char ServerBrowserState(long param_1)
{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x02';
  if (*(int *)(param_1 + 0x18) < 1) {
    iVar1 = *(int *)(param_1 + 0x70);
    cVar2 = '\x01';
    if (!(__builtin_expect(!(iVar1 != 3 && iVar1 != 0), 1))) {
      return (iVar1 != 1) * '\x03';
    }
  }
  return cVar2;
}
