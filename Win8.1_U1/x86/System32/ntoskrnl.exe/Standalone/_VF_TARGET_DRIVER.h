typedef struct _VF_AVL_TREE_NODE
{
  /* 0x0000 */ void* p;
  /* 0x0004 */ unsigned long RangeSize;
} VF_AVL_TREE_NODE, *PVF_AVL_TREE_NODE; /* size: 0x0008 */

typedef struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS
{
  /* 0x0000 */ struct _VERIFIER_SHARED_EXPORT_THUNK* SharedExportThunks;
  /* 0x0004 */ struct _VERIFIER_SHARED_EXPORT_THUNK* PoolSharedExportThunks;
  /* 0x0008 */ struct _VERIFIER_SHARED_EXPORT_THUNK* OrderDependentSharedExportThunks;
  /* 0x000c */ struct _VERIFIER_SHARED_EXPORT_THUNK* XdvSharedExportThunks;
} VF_TARGET_ALL_SHARED_EXPORT_THUNKS, *PVF_TARGET_ALL_SHARED_EXPORT_THUNKS; /* size: 0x0010 */

typedef struct _VF_TARGET_DRIVER
{
  /* 0x0000 */ struct _VF_AVL_TREE_NODE TreeNode;
  union // _TAG_UNNAMED_161
  {
    union
    {
      /* 0x0008 */ struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS AllSharedExportThunks;
      struct // _TAG_UNNAMED_162
      {
        struct /* bitfield */
        {
          /* 0x0008 */ unsigned long SnapSharedExportsFailed : 1; /* bit position: 0 */
          /* 0x0008 */ unsigned long Spare : 31; /* bit position: 1 */
        }; /* bitfield */
      } /* size: 0x0004 */ Flags;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u1;
  /* 0x0018 */ struct _VF_TARGET_VERIFIED_DRIVER_DATA* VerifiedData;
} VF_TARGET_DRIVER, *PVF_TARGET_DRIVER; /* size: 0x001c */

