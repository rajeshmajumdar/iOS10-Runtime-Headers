/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUGZipFileInputStream : NSObject <SFUInputStream> {
    int  _fd;
    void * _file;
    BOOL  _isCachingDisabled;
    long long  _offset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (BOOL)canSeek;
- (void)close;
- (id)closeLocalStream;
- (void)dealloc;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)initWithPath:(id)arg1;
- (long long)offset;
- (unsigned long)readToBuffer:(char *)arg1 size:(unsigned long)arg2;
- (void)seekToOffset:(long long)arg1;

@end
