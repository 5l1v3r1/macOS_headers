//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKDownload.h>

@class NSString, NSThread;

@interface PKFileDownload : PKDownload
{
    NSString *_srcPath;
    int _readFileDescriptor;
    int _writeFileDescriptor;
    long long _bytesDownloaded;
    BOOL _isResume;
    BOOL _runFileReadThread;
    NSThread *_fileReadThread;
    id <PKDownloadDelegate><NSObject> _delegate;
}

+ (BOOL)canDownloadWithResumeData:(id)arg1;
+ (BOOL)canDownloadURL:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)_currentThreadCallback:(id)arg1;
- (int)_fileCopyThread:(id)arg1;
- (void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2;
- (id)resumeData;
- (id)sourceURL;
- (id)sourcePath;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithResumeData:(id)arg1 destination:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 withChunklistURL:(id)arg2 withChunklistSize:(id)arg3 delegate:(id)arg4;

@end

