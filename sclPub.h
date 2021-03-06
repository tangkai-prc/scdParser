/*
 * @Date: 2020-12-07 09:27
 * @LastEditTime: 2020-12-24 17:18
 * @LastEditors: tangkai3
 * @Description: 
 */
#ifndef SCLPUB_H
#define SCLPUB_H

#ifdef __cplusplus
extern "C" {
#endif
#include "glbtypes.h"
#include "mem_chk.h"
#include "str_util.h"
#include "slog.h"
#include "scl.h"
#include "storage.h"
#include <sys/time.h>

#undef DB_SQLITE3

int load_scd_file(const char* fileName, SCL_INFO* sclInfo);
void release_scd_file(SCL_INFO* sclInfo);
void scdGetIedStructInfo(SCL_INFO* sclInfo, void* database);
void scdGetCommuncationInfo(SCL_INFO* sclInfo, void* database);
int scdGetDataSetInfo(SCL_INFO* sclInfo, void* database);
int sclGetDoiNameValue(SCL_INFO* sclInfo, void* database);
char* sclGetDOTypeByDoName(SCL_INFO* sclInfo, const char* lnType, const char* doName);
char* sclGetDaNameByFcName(SCL_INFO* sclInfo, const char* doType, const char* fcName);
int sclGetDOInfoByLnType(SCL_INFO* sclInfo, const char* lnType, SCL_DO** lnInfo);
int sclGetDAListByDoType(SCL_INFO* sclInfo, const char* DoType, SCL_DA** pDAInfo);
int sclGetBdaByDaType(SCL_INFO* sclInfo, const char* DaType, SCL_BDA** pBdaHead);
int sclGetEnumValByDaType(SCL_INFO* sclInfo, const char* DaType, SCL_ENUMVAL** enumvalHead);
int sclGetUrcbElements(SCL_INFO* sclInfo, void* database);
int sclGetBrcbElements(SCL_INFO* sclInfo, void* database);
int sclGetLogControlBlock(SCL_INFO* sclInfo, void* database);
ST_VOID sx_get_daName_combined(ST_CHAR* srcDoName, const ST_CHAR* delims, ST_CHAR* doiName, ST_CHAR* sdiName);

#ifdef __cplusplus
}
#endif
#endif /* SCLPUB_H */