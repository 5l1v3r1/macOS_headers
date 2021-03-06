//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@protocol NSTextAttachmentCell;

@interface HeaderTextView : NSTextView
{
    BOOL _shouldClearSelectionOnFocusChange;
    id <NSTextAttachmentCell> _attachmentCell;
    struct CGSize _contentSize;
    struct CGRect _attachmentCellRect;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect attachmentCellRect; // @synthesize attachmentCellRect=_attachmentCellRect;
@property(retain, nonatomic) id <NSTextAttachmentCell> attachmentCell; // @synthesize attachmentCell=_attachmentCell;
@property(nonatomic) BOOL shouldClearSelectionOnFocusChange; // @synthesize shouldClearSelectionOnFocusChange=_shouldClearSelectionOnFocusChange;
- (void).cxx_destruct;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)_selectedString;
- (id)_selectedAttributedString;
- (id)writablePasteboardTypes;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (id)_attachmentCellForCharacterAtIndex:(unsigned long long)arg1;
- (unsigned long long)_glyphIndexForPoint:(struct CGPoint)arg1 glyphRect:(struct CGRect *)arg2;
- (void)resetCursorRects;
- (struct CGSize)intrinsicContentSize;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)autoscroll:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeKeyView;

@end

