typedef enum _BLOB_ID
{
  BLOB_TYPE_UNKNOWN = 0,
  BLOB_TYPE_CONNECTION_INFO = 1,
  BLOB_TYPE_MESSAGE = 2,
  BLOB_TYPE_SECURITY_CONTEXT = 3,
  BLOB_TYPE_SECTION = 4,
  BLOB_TYPE_REGION = 5,
  BLOB_TYPE_VIEW = 6,
  BLOB_TYPE_RESERVE = 7,
  BLOB_TYPE_DIRECT_TRANSFER = 8,
  BLOB_TYPE_HANDLE_DATA = 9,
  BLOB_TYPE_MAX_ID = 10,
} BLOB_ID, *PBLOB_ID;

typedef struct _BLOB_TYPE
{
  /* 0x0000 */ enum _BLOB_ID ResourceId;
  /* 0x0004 */ unsigned long PoolTag;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long CreatedObjects;
  /* 0x0010 */ unsigned long DeletedObjects;
  /* 0x0014 */ void* DeleteProcedure /* function */;
  /* 0x0018 */ void* DestroyProcedure /* function */;
  /* 0x001c */ unsigned long UsualSize;
  /* 0x0020 */ unsigned long LookasideIndex;
} BLOB_TYPE, *PBLOB_TYPE; /* size: 0x0024 */

