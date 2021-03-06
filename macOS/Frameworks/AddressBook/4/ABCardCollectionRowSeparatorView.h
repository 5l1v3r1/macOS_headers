//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBook/ABCardCollectionRowView.h>

@class ABCardViewSeparator, NSArray;

@interface ABCardCollectionRowSeparatorView : ABCardCollectionRowView
{
    ABCardViewSeparator *_separator;
    NSArray *_separatorConstraints;
    double _leadingMarginWidth;
    double _trailingMarginWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double trailingMarginWidth; // @synthesize trailingMarginWidth=_trailingMarginWidth;
@property(nonatomic) double leadingMarginWidth; // @synthesize leadingMarginWidth=_leadingMarginWidth;
@property(retain, nonatomic) NSArray *separatorConstraints; // @synthesize separatorConstraints=_separatorConstraints;
@property(retain, nonatomic) ABCardViewSeparator *separator; // @synthesize separator=_separator;
- (void)generateConstraints;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)buildSeparatorView;
- (id)initWithLeadingMarginWidth:(double)arg1 trailingMarginWidth:(double)arg2;

@end

