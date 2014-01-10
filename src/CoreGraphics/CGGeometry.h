#ifndef CGGEOMETRY_H_
#define CGGEOMETRY_H_
#include "CGBase.h"
#include <float.h>
#include <stdbool.h>
#include <CoreFoundation/CFDictionary.h>

BEGIN_EXTERN_C

struct CGPoint
{
   CGFloat x;
   CGFloat y;
};
typedef struct CGPoint CGPoint;

struct CGSize
{
   CGFloat width;
   CGFloat height;
};
typedef struct CGSize CGSize;

struct CGVector
{
   CGFloat dx;
   CGFloat dy;
};
typedef struct CGVector CGVector;

struct CGRect
{
   CGPoint origin;
   CGSize size;
};
typedef struct CGRect CGRect;

extern const CGRect CGRectInfinite;
extern const CGPoint CGPointZero;
extern const CGRect CGRectZero;
extern const CGSize CGSizeZero;
extern const CGRect CGRectNull;

CGPoint CGPointMake(CGFloat x, CGFloat y);
CGSize CGSizeMake(CGFloat width, CGFloat height);
CGRect CGRectMake(CGFloat x, CGFloat y, CGFloat width, CGFloat height);
CGVector CGVectorMake(CGFloat dx, CGFloat dy);

bool CGSizeEqualToSize(CGSize size1, CGSize size2);
bool CGPointEqualToPoint(CGPoint point1, CGPoint point2);
bool CGRectEqualToRect(CGRect rect1, CGRect rect2);

CFDictionaryRef CGPointCreateDictionaryRepresentation(CGPoint point);
CFDictionaryRef CGSizeCreateDictionaryRepresentation(CGSize size);
CFDictionaryRef CGRectCreateDictionaryRepresentation(CGRect rect);

bool CGPointMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGPoint *point);
bool CGSizeMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGSize *size);
bool CGRectMakeWithDictionaryRepresentation(CFDictionaryRef dict, CGRect *rect);

CGFloat CGRectGetHeight(CGRect rect);
CGFloat CGRectGetWidth(CGRect rect);
CGFloat CGRectGetMaxX(CGRect rect);
CGFloat CGRectGetMaxY(CGRect rect);
CGFloat CGRectGetMinX(CGRect rect);
CGFloat CGRectGetMinY(CGRect rect);
CGFloat CGRectGetMidX(CGRect rect);
CGFloat CGRectGetMidY(CGRect rect);
bool CGRectIsNull(CGRect rect);
bool CGRectIsInfinite(CGRect rect);

END_EXTERN_C

#endif
