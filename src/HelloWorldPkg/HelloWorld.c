#include <Uefi.h>
#include <Library/UefiLib.h>

EFI_STATUS
EFIAPI
EfiAppMain(
    IN EFI_HANDLE ImageHandle,
    IN EFI_SYSTEM_TABLE *SystemTable
) {
    Print(L"Hello World\n");
    while(1){}
    return EFI_SUCCESS;
}
