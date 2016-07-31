#pragma once


/*---------------------------------------------
 *                  extern data
-*---------------------------------------------*/

extern  Gc      exbGarCol;
extern  BUFF   *extSaveBuf;

extern  void   *threadMemPool, *procMemPool;   /* DMPH */
extern  void   *ebSemControl;                  /* MSEM */

extern  EXBSET  exbRunSet;
extern  MYSQL   dbNewsHandler, dbDicHandler, dbKeysHandler;

extern  CLISTS  charTermList, charHeadSave;

extern  char    sqlSeleCom[];
extern  char    tblNewsName[], dbNewsName[];
extern  char    tblWordName[], dbDicName[];
extern  char    tblKeysName[], dbKeysName[];

extern  MATOS   pthreadCtlLock, freeCtlLock, nPaperLock, dicDbLock;

extern  uLong   tPaperNum;
extern  int32_t	nExbugPthead, upMaxTerms, keywordListSize;

