/* It had generated by DirectStruct v1.4.4 */
#ifndef _H_dag_schedule_config_
#define _H_dag_schedule_config_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if ( defined __unix ) || ( defined __linux__ )
#ifndef _WINDLL_FUNC
#define _WINDLL_FUNC
#endif
#elif ( defined _WIN32 )
#ifndef _WINDLL_FUNC
#define _WINDLL_FUNC		_declspec(dllexport)
#endif
#endif

#ifndef DSCTRUE
#define DSCTRUE	(char)'t'
#endif
#ifndef DSCFALSE
#define DSCFALSE	(char)'f'
#endif

#if ( defined __unix ) | ( defined __linux__ )
#include <arpa/inet.h>
#define SNPRINTF		snprintf
#elif ( defined _WIN32 )
#define SNPRINTF		_snprintf
#include "winsock.h"
#endif

#if ( defined __unix ) | ( defined __linux__ )
#ifndef longlong
#define longlong	long long
#define ulonglong	unsigned long long
#define LL(_ll_)	_ll_##LL
#define ULL(_ll_)	_ll_##ULL
#define LONGLONG_FORMAT_SPEC	"%ll"
#define ATOLL	atoll
#endif
#if ( defined _AIX )
#define __BIG_ENDIAN	BIG_ENDIAN
#define __LITTLE_ENDIAN	LITTLE_ENDIAN
#define __BYTE_ORDER	BYTE_ORDER
#endif
#elif ( defined _WIN32 )
#ifndef longlong
#define longlong	__int64
#define ulonglong	unsigned __int64
#define LL(_ll_)	_ll_
#define ULL(_ll_)	_ll_
#define LONGLONG_FORMAT_SPEC	"%I64"
#define ATOLL	_atoi64
#define __BIG_ENDIAN	4321
#define __LITTLE_ENDIAN	1234
#define __BYTE_ORDER	__LITTLE_ENDIAN
#endif
#endif

#ifndef NATOC
#define NATOC(_base_,_len_,_result_)	{char buf[3+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,3);_result_=(char)atoi(buf);}
#endif
#ifndef NATOS
#define NATOS(_base_,_len_,_result_)	{char buf[5+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,5);_result_=(short)atol(buf);}
#endif
#ifndef NATOI
#define NATOI(_base_,_len_,_result_)	{char buf[10+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,10);_result_=atoi(buf);}
#endif
#ifndef NATOLL
#define NATOLL(_base_,_len_,_result_)	{char buf[20+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,20);_result_=ATOLL(buf);}
#endif
#ifndef NATOF
#define NATOF(_base_,_len_,_result_)	{char buf[20+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,20);_result_=(float)atof(buf);}
#endif
#ifndef NATOLF
#define NATOLF(_base_,_len_,_result_)	{char buf[60+1];memset(buf,0x00,sizeof(buf));strncpy(buf,_base_,60);_result_=atof(buf);}
#endif
#ifndef NATOB
#define NATOB(_base_,_len_,_result_)	{if(memcmp(_base_,"true",4)==0)_result_=DSCTRUE;else _result_=DSCFALSE;}
#endif

typedef struct
{
	struct
	{
		char	schedule_name[ 64 + 1 ] ;
		char	schedule_desc[ 256 + 1 ] ;
	} schedule ;
	struct
	{
		struct
		{
			char	from[ 64 + 1 ] ;
			char	to[ 64 + 1 ] ;
		} batches_direction [ 100 ] ;
		int	_batches_direction_count ;
		int	_batches_direction_size ;
		struct
		{
			char	name[ 64 + 1 ] ;
			char	desc[ 256 + 1 ] ;
			int	view_pos_x ;
			int	view_pos_y ;
			struct
			{
				char	program_and_params[ 256 + 1 ] ;
				int	timeout ;
			} tasks [ 100 ] ;
			int	_tasks_count ;
			int	_tasks_size ;
		} batches_info [ 100 ] ;
		int	_batches_info_count ;
		int	_batches_info_size ;
	} batches ;
} dag_schedule_config ;

_WINDLL_FUNC int DSCINIT_dag_schedule_config( dag_schedule_config *pst );

#include "fasterjson.h"

_WINDLL_FUNC int DSCSERIALIZE_JSON_dag_schedule_config( dag_schedule_config *pst , char *encoding , char *buf , int *p_len );
_WINDLL_FUNC int DSCDESERIALIZE_JSON_dag_schedule_config( char *encoding , char *buf , int *p_len , dag_schedule_config *pst );

#endif
