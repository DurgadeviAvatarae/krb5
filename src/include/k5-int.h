/*
 * This prototype for k5-int.h (Krb5 internals include file)
 * includes the user-visible definitions from krb5.h and then
 * includes other definitions that are not user-visible but are
 * required for compiling Kerberos internal routines.
 *
 * John Gilmore, Cygnus Support, Sat Jan 21 22:45:52 PST 1995
 */

#include "krb5.h"

/* krb5/krb5.h includes many other krb5/*.h files too.  The ones that it
   doesn't include, we include below.  */

#include "asn1.h"
#include "copyright.h"
#include "dbm.h"
#include "ext-proto.h"
/* Needed to define time_t for kdb.h prototypes.  */
#include "sysincl.h"
#include "los-proto.h"
#include "kdb.h"
#include "kdb_dbm.h"
#include "libos.h"
#include "mit-des.h"
#include "preauth.h"
#include "rsa-md5.h"
/* #include "krb5/wordsize.h" -- comes in through base-defs.h. */
