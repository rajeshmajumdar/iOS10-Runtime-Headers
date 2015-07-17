/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {
    int  _isPartialDownload;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (retain) NSURL *url;

+ (id)dataProviderWithPath:(id)arg1;
+ (id)dataProviderWithURL:(id)arg1;

- (id)_fileAttributes:(id)arg1;
- (BOOL)_isFileURL;
- (BOOL)_partialDownload;
- (id)_path;
- (BOOL)_setPartialDownload:(BOOL)arg1;
- (BOOL)append:(id)arg1 isComplete:(BOOL)arg2;
- (id)data;
- (void)dataWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)errorWithMessage:(id)arg1 code:(int)arg2;
- (BOOL)exists;
- (BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)messageForAttachment:(id)arg1;
- (BOOL)save:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
