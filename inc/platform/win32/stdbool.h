/*
stdbool.h 

-- Boolean type and values
(substitute for missing C99 standard header)

public-domain implementation from [EMAIL PROTECTED]

implements subclause 7.16 of ISO/IEC 9899:1999 (E)
*/


#ifndef _MSC_STDBOOL_H_ // [
#define _MSC_STDBOOL_H_

typedef int _Bool;

#define bool _Bool
#define true 1
#define false 0

#endif /* !defined(__bool_true_false_are_defined) */