/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_USBCameraSonixCNX6122A1Driver,
    0x9a476d29,0x2f55,0x4baf,0x9a,0x1a,0xca,0x79,0xb2,0x2b,0x76,0xb3);
// {9a476d29-2f55-4baf-9a1a-ca79b22b76b3}
