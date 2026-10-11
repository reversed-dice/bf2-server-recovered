// FUNCTION: BF2 0x845310
extern "C" {
extern long _ZNSt8_Rb_treeItSt4pairIKt30VOIP_CClients_ClientDataEESt10_Select1stIS3_ESt4lessItESaIS3_E4findERS1_(long, short*);

long VOIP_CClients_GetClientData(long param_1, unsigned short param_2) {
    long end = param_1 + 0x10;
    long lVar1 = _ZNSt8_Rb_treeItSt4pairIKt30VOIP_CClients_ClientDataEESt10_Select1stIS3_ESt4lessItESaIS3_E4findERS1_(param_1 + 8, (short*)&param_2);
    return (end == lVar1) ? 0 : lVar1 + 0x28;
}
}
