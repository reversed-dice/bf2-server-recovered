// FUNCTION: BF2 0x46cca0

extern "C" void f_46cca0
               (unsigned long long *param_1,unsigned char param_2)
{
  *param_1 = 0xb32650;
  param_1[1] = 0;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 3) = param_2;
  return;
}
// REVERSED_FUNCTION: dice_hfe_GameSpyCDKeyAuthenticator_GameSpyCDKeyAuthenticator_bool (0x46cca0)
