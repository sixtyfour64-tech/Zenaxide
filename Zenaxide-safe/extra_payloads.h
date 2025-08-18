#pragma once
#include "zenaxide.h"

VOID
GetRandomPath(
    _Inout_ PWSTR szRandom,
    _In_ INT nLength
);

VOID
WINAPI
MessageBoxThread(VOID);

#ifdef GDI_ONLY
VOID
WINAPI
EnumGlobalWnd(VOID);

VOID
WINAPI
CursorClicker(VOID);

VOID
WINAPI
CursorMess(VOID);

VOID
WINAPI
IconDraw(VOID);
#endif