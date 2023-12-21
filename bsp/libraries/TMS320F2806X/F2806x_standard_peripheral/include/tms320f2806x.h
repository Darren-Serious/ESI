/*
 * f2806x.h
 *
 *  Created on: Dec 17, 2023
 *      Author: darren
 */

#ifndef __F2806X_H__
#define __F2806X_H__

/* bit operations */
#define BIT(x)                       ((Uint32)((Uint32)0x01U<<(x)))
#define BITS(start, end)             ((0xFFFFFFFFUL << (start)) & (0xFFFFFFFFUL >> (31U - (Uint32)(end))))

#ifdef __cplusplus
extern "C" {
#endif



#ifdef __cplusplus
}
#endif /* extern "C" */

#endif /* __F2806X_H__ */
