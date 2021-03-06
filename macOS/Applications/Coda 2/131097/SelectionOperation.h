//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCMMMOperation.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface SelectionOperation : TCMMMOperation <NSCopying>
{
    struct _NSRange I_selectedRange;
}

+ (id)operationID;
+ (void)transformOperation:(id)arg1 serverOperation:(id)arg2;
+ (id)selectionOperationWithRange:(struct _NSRange)arg1 userID:(id)arg2;
+ (void)initialize;
- (id)description;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (struct _NSRange)selectedRange;
- (BOOL)isEqualTo:(id)arg1;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

