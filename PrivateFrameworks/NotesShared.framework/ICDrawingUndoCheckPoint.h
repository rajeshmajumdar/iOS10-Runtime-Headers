/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawingUndoCheckPoint : NSObject {
    NSString * _cacheFilename;
    struct CGImage { } * _image;
    BOOL  _isEraseAllCheckPoint;
    NSOrderedSet * _renderedCommands;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *cacheFilename;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, readonly) BOOL isEraseAllCheckPoint;
@property (nonatomic, readonly) NSOrderedSet *renderedCommands;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)cacheDirectory;
+ (unsigned long long)cacheSize;
+ (void)deleteAllCacheFiles;

- (void).cxx_destruct;
- (id)cacheFilename;
- (void)dealloc;
- (BOOL)ensureCacheDirectoryExists;
- (void)flushFromMemoryIfPossible;
- (struct CGImage { }*)image;
- (id)initWithImage:(struct CGImage { }*)arg1 renderedCommands:(id)arg2;
- (BOOL)isEraseAllCheckPoint;
- (BOOL)isInMemory;
- (void)reloadImage;
- (id)renderedCommands;
- (struct CGImage { }*)retainedImage;
- (void)setImage:(struct CGImage { }*)arg1;
- (id)uuid;
- (void)writeToDiskAndFreeMemory;

@end
