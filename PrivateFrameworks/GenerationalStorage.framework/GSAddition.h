/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSAddition : NSObject {
    NSString * _displayName;
    NSString * _namespace;
    unsigned long long  _options;
    NSString * _originalName;
    NSNumber * _size;
    NSObject<GSAdditionStoring><GSAdditionStoringPrivate> * _storage;
    NSURL * _url;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *br_lastEditorDeviceName;
@property (nonatomic, readonly) NSString *br_lastEditorName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) BOOL isSavedConflict;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *nameSpace;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *originalPOSIXName;
@property (nonatomic, readonly) <NSCopying><NSSecureCoding> *persistentIdentifier;
@property (nonatomic, readonly) NSData *sandboxExtension;
@property (nonatomic, readonly) NSNumber *size;
@property (nonatomic, readonly) NSObject<GSAdditionStoring> *storage;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

+ (id)makeNameForUser:(unsigned int)arg1 name:(id)arg2;

- (id)_initWithStorage:(id)arg1 andDictionary:(id)arg2;
- (void)_refreshWithDictionary:(id)arg1;
- (BOOL)copyAdditionContentToURL:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)displayNameWithError:(id*)arg1;
- (unsigned int)hash;
- (id)init;
- (BOOL)internalStat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { int x_8_1_1; long x_8_1_2; } x8; struct timespec { int x_9_1_1; long x_9_1_2; } x9; struct timespec { int x_10_1_1; long x_10_1_2; } x10; struct timespec { int x_11_1_1; long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSavedConflict;
- (BOOL)mergeUserInfo:(id)arg1 error:(id*)arg2;
- (id)name;
- (id)nameSpace;
- (unsigned long long)options;
- (id)originalPOSIXName;
- (id)originalPOSIXNameWithError:(id*)arg1;
- (id)persistentIdentifier;
- (BOOL)refreshWithError:(id*)arg1;
- (id)replaceItemAtURL:(id)arg1 error:(id*)arg2;
- (id)sandboxExtension;
- (BOOL)setDisplayName:(id)arg1 error:(id*)arg2;
- (BOOL)setNameSpace:(id)arg1 error:(id*)arg2;
- (BOOL)setOptions:(unsigned long long)arg1 error:(id*)arg2;
- (id)size;
- (struct NSObject { Class x1; }*)storage;
- (id)url;
- (id)userInfo;
- (id)userInfoWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (BOOL)_br_markResolvedWithError:(id*)arg1;
- (id)br_lastEditorDeviceName;
- (id)br_lastEditorName;
- (BOOL)br_markResolvedWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)additionURLForName:(id)arg1 storagePrefix:(id)arg2 inConflictNamespace:(BOOL)arg3;
+ (BOOL)brc_parseAdditionFilename:(id)arg1 mangledContainerID:(id*)arg2 itemID:(id*)arg3 etag:(id*)arg4;

- (BOOL)brc_parseMangledContainerID:(id*)arg1 itemID:(id*)arg2 etag:(id*)arg3;

@end
