//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXEditToolController, IPXEditToolbarController;

@protocol IPXEditToolbarDelegate <NSObject>
- (void)toolbar:(IPXEditToolbarController *)arg1 didDeselectToolController:(IPXEditToolController *)arg2 next:(IPXEditToolController *)arg3 completion:(void (^)(void))arg4;
- (void)toolbar:(IPXEditToolbarController *)arg1 willDeselectToolController:(IPXEditToolController *)arg2 next:(IPXEditToolController *)arg3 completion:(void (^)(void))arg4;
- (void)toolbar:(IPXEditToolbarController *)arg1 didSelectToolController:(IPXEditToolController *)arg2 previous:(IPXEditToolController *)arg3 completion:(void (^)(void))arg4;
- (void)toolbar:(IPXEditToolbarController *)arg1 willSelectToolController:(IPXEditToolController *)arg2 previous:(IPXEditToolController *)arg3 completion:(void (^)(void))arg4;
@end

