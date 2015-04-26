/* It had generated by DirectStruct v1.3.2 */
#include "IDL_worker_notice_request.dsc.h"

int DSCINIT_worker_notice_request( worker_notice_request *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(worker_notice_request) );
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_COMPACT_worker_notice_request( worker_notice_request *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) - 1 ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"sysname\":"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->sysname); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"release\":"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->release); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"bits\":"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->bits); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,","); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"ip\":"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ip); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"\""); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,","); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"port\":"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->port); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,","); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"is_working\":"); if( len < 0 ) return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->is_working); JSONESCAPE_EXPAND(buf,len,remain_len); if( len < 0 ) return -1;
	len=SNPRINTF(buf,remain_len,"}"); if( len <= 0 ) return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len)-1 - remain_len ;
	
	return 0;
}

funcCallbackOnJsonNode CallbackOnJsonNode_worker_notice_request ;
int CallbackOnJsonNode_worker_notice_request( int type , char *jpath , int jpath_len , int jpath_size , char *node , int node_len , char *content , int content_len , void *p )
{
	worker_notice_request	*pst = (worker_notice_request*)p ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
		/* sysname */
		if( jpath_len == 8 && strncmp( jpath , "/sysname" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->sysname,sizeof(pst->sysname)-1,return -7);}
		/* release */
		if( jpath_len == 8 && strncmp( jpath , "/release" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->release,sizeof(pst->release)-1,return -7);}
		/* bits */
		if( jpath_len == 5 && strncmp( jpath , "/bits" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->bits);}
		/* ip */
		if( jpath_len == 3 && strncmp( jpath , "/ip" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->ip,sizeof(pst->ip)-1,return -7);}
		/* port */
		if( jpath_len == 5 && strncmp( jpath , "/port" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->port);}
		/* is_working */
		if( jpath_len == 11 && strncmp( jpath , "/is_working" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->is_working);}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_COMPACT_worker_notice_request( char *encoding , char *buf , int *p_len , worker_notice_request *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_worker_notice_request , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}