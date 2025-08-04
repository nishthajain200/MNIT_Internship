
undefined4 FUN_1c0001060(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  PoStartNextPowerIrp(param_2);
  if (*piVar1 == 1) {
    uVar3 = FUN_1c0001008(param_1,param_2);
  }
  else if (*piVar1 == 2) {
    if ((byte)(*(char *)(lVar2 + 1) - 2U) < 2) {
      uVar3 = 0;
      *(undefined4 *)(param_2 + 0x30) = 0;
    }
    IofCompleteRequest(param_2,0);
  }
  else {
    uVar3 = 0xc0000010;
  }
  return uVar3;
}

