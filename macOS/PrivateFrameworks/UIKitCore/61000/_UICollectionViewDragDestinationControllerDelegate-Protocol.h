//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, UIDragItem, _UICollectionViewDragDestinationController;
@protocol UIDragAnimating;

@protocol _UICollectionViewDragDestinationControllerDelegate <NSObject>
- (void)dragDestinationControllerSessionDidEnd:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerSessionWillBegin:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerDidConcludeDrop:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didCompleteDropAnimationForDragItem:(UIDragItem *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willBeginDropAnimationForDragItem:(UIDragItem *)arg2 animator:(id <UIDragAnimating>)arg3;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didPerformDropAtIndexPath:(NSIndexPath *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willPerformDropAtIndexPath:(NSIndexPath *)arg2;
@end

