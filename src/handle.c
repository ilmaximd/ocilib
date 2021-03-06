/*
    +-----------------------------------------------------------------------------------------+
    |                                                                                         |
    |                               OCILIB - C Driver for Oracle                              |
    |                                                                                         |
    |                                (C Wrapper for Oracle OCI)                               |
    |                                                                                         |
    |                              Website : http://www.ocilib.net                            |
    |                                                                                         |
    |             Copyright (c) 2007-2015 Vincent ROGIER <vince.rogier@ocilib.net>            |
    |                                                                                         |
    +-----------------------------------------------------------------------------------------+
    |                                                                                         |
    |             This library is free software; you can redistribute it and/or               |
    |             modify it under the terms of the GNU Lesser General Public                  |
    |             License as published by the Free Software Foundation; either                |
    |             version 2 of the License, or (at your option) any later version.            |
    |                                                                                         |
    |             This library is distributed in the hope that it will be useful,             |
    |             but WITHOUT ANY WARRANTY; without even the implied warranty of              |
    |             MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU           |
    |             Lesser General Public License for more details.                             |
    |                                                                                         |
    |             You should have received a copy of the GNU Lesser General Public            |
    |             License along with this library; if not, write to the Free                  |
    |             Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.          |
    |                                                                                         |
    +-----------------------------------------------------------------------------------------+
*/

/* --------------------------------------------------------------------------------------------- *
 * $Id: handle.c, Vincent Rogier $
 * --------------------------------------------------------------------------------------------- */

#include "ocilib_internal.h"

/* ********************************************************************************************* *
 *                            PUBLIC FUNCTIONS
 * ********************************************************************************************* */

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetEnvironment
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetEnvironment
(
    void
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_INITIALIZED()

    call_retval = OCILib.env;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetContext
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetContext
(
    OCI_Connection *con
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_CONNECTION, con)

    call_retval = con->cxt;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetServer
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetServer
(
    OCI_Connection *con
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_CONNECTION, con)

    call_retval = con->svr;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()

}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetError
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetError
(
    OCI_Connection *con
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_CONNECTION, con)

    call_retval = con->err;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetSession
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetSession
(
    OCI_Connection *con
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_CONNECTION, con)

    call_retval = con->ses;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetTransaction
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetTransaction
(
    OCI_Transaction *trans
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_TRANSACTION, trans)

    call_retval = trans->htr;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetStatement
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetStatement
(
    OCI_Statement *stmt
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_STATEMENT, stmt)

    call_retval = stmt->stmt;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()

}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetLob
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetLob
(
    OCI_Lob *lob
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_LOB, lob)

    call_retval = lob->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetFile
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetFile
(
    OCI_File *file
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_FILE, file)

    call_retval = file->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetDate
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetDate
(
    OCI_Date *date
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_DATE, date)

    call_retval = date->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetTimestamp
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetTimestamp
(
    OCI_Timestamp *tmsp
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_TIMESTAMP, tmsp)

    call_retval = tmsp->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetInterval
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetInterval
(
    OCI_Interval *itv
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_INTERVAL, itv)

    call_retval = itv->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetObject
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetObject
(
    OCI_Object *obj
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_OBJECT, obj)

    call_retval = obj->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetColl
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetColl
(
    OCI_Coll *coll
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_COLLECTION, coll)

    call_retval = coll->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetRef
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetRef
(
    OCI_Ref *ref
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_REF, ref)

    call_retval = ref->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetMutex
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetMutex
(
    OCI_Mutex *mutex
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_MUTEX, mutex)

    call_retval = mutex->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetThreadID
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetThreadID
(
    OCI_Thread *thread
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_THREAD, thread)

    call_retval = thread->id;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetThread
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetThread
(
    OCI_Thread *thread
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_THREAD, thread)

    call_retval = thread->handle;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
 }

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetDirPathCtx
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetDirPathCtx
(
    OCI_DirPath *dp
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_DIRPATH, dp)

    call_retval = dp->ctx;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetDirPathColArray
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetDirPathColArray
(
    OCI_DirPath *dp
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_DIRPATH, dp)

    call_retval = dp->arr;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()

}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetDirPathStream
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetDirPathStream
(
    OCI_DirPath *dp
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_DIRPATH, dp)

    call_retval = dp->strm;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()

}

/* --------------------------------------------------------------------------------------------- *
 * OCI_HandleGetSubscription
 * --------------------------------------------------------------------------------------------- */

const void * OCI_API OCI_HandleGetSubscription
(
    OCI_Subscription *sub
)
{
    OCI_LIB_CALL_ENTER(const void *, NULL)

    OCI_CHECK_PTR(OCI_IPC_NOTIFY, sub)

    call_retval = sub->subhp;
    call_status = TRUE;

    OCI_LIB_CALL_EXIT()
}

