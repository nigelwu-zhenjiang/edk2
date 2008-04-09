/** @file
  GUID used for Memory Type Information entries in the HOB list.

Copyright (c) 2006 - 2008, Intel Corporation. <BR>
All rights reserved. This program and the accompanying materials
are licensed and made available under the terms and conditions of the BSD License
which accompanies this distribution.  The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef __MEMORY_TYPE_INFORMATION_GUID_H__
#define __MEMORY_TYPE_INFORMATION_GUID_H__

#define EFI_MEMORY_TYPE_INFORMATION_GUID \
  { 0x4c19049f,0x4137,0x4dd3, { 0x9c,0x10,0x8b,0x97,0xa8,0x3f,0xfd,0xfa } }

#define EFI_MEMORY_TYPE_INFORMATION_VARIABLE_NAME L"MemoryTypeInformation"

extern EFI_GUID gEfiMemoryTypeInformationGuid;

typedef struct {
  UINT32  Type;
  UINT32  NumberOfPages;
} EFI_MEMORY_TYPE_INFORMATION;

#endif
