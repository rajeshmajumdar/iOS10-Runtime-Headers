/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATAsset : NSObject <NSSecureCoding> {
    NSString * _assetType;
    BOOL  _bypassStore;
    unsigned long long  _bytesRemaining;
    unsigned int  _completedAssetParts;
    id /* block */  _completionBlock;
    NSString * _dataclass;
    float  _downloadProgress;
    NSError * _error;
    NSURL * _icon;
    NSString * _identifier;
    NSString * _infoPlist;
    BOOL  _installOnly;
    float  _installProgress;
    BOOL  _installStarted;
    BOOL  _installed;
    BOOL  _isDownload;
    BOOL  _isRestore;
    BOOL  _legacy;
    NSString * _localPath;
    NSString * _prettyName;
    unsigned int  _priority;
    id /* block */  _progressBlock;
    BOOL  _readyForStore;
    ATStoreInfo * _storeInfo;
    long long  _storePID;
    NSString * _storePlist;
    unsigned long long  _totalBytes;
    NSDictionary * _variantOptions;
}

@property (nonatomic, retain) NSString *assetType;
@property (nonatomic) BOOL bypassStore;
@property (nonatomic) unsigned long long bytesRemaining;
@property (nonatomic) unsigned int completedAssetParts;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSString *dataclass;
@property (nonatomic) float downloadProgress;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSURL *icon;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *infoPlist;
@property (nonatomic) BOOL installOnly;
@property (nonatomic) float installProgress;
@property (nonatomic) BOOL installStarted;
@property (getter=isInstalled, nonatomic) BOOL installed;
@property (nonatomic) BOOL isDownload;
@property (nonatomic) BOOL isRestore;
@property (getter=isLegacy, nonatomic) BOOL legacy;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *prettyName;
@property (nonatomic) unsigned int priority;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic) BOOL readyForStore;
@property (nonatomic, retain) ATStoreInfo *storeInfo;
@property (nonatomic) long long storePID;
@property (nonatomic, retain) NSString *storePlist;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic, retain) NSDictionary *variantOptions;

+ (id)assetWithSerializedAsset:(id)arg1;
+ (id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
+ (id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5;
+ (BOOL)supportsSecureCoding;
+ (id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4;

- (void).cxx_destruct;
- (id)_variantDescription;
- (unsigned int)assetParts;
- (id)assetType;
- (BOOL)bypassStore;
- (unsigned long long)bytesRemaining;
- (unsigned int)completedAssetParts;
- (id /* block */)completionBlock;
- (id)dataclass;
- (id)description;
- (float)downloadProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned int)hash;
- (id)icon;
- (id)identifier;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3;
- (BOOL)installOnly;
- (float)installProgress;
- (BOOL)installStarted;
- (BOOL)isDownload;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInstalled;
- (BOOL)isLegacy;
- (BOOL)isRestore;
- (id)manifestEntry;
- (id)path;
- (id)prettyName;
- (unsigned int)priority;
- (id /* block */)progressBlock;
- (BOOL)readyForStore;
- (id)serializedAsset;
- (void)setAssetType:(id)arg1;
- (void)setBypassStore:(BOOL)arg1;
- (void)setBytesRemaining:(unsigned long long)arg1;
- (void)setCompletedAssetParts:(unsigned int)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDataclass:(id)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setError:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoPlist:(id)arg1;
- (void)setInstallOnly:(BOOL)arg1;
- (void)setInstallProgress:(float)arg1;
- (void)setInstallStarted:(BOOL)arg1;
- (void)setInstalled:(BOOL)arg1;
- (void)setIsDownload:(BOOL)arg1;
- (void)setIsRestore:(BOOL)arg1;
- (void)setLegacy:(BOOL)arg1;
- (void)setPath:(id)arg1;
- (void)setPrettyName:(id)arg1;
- (void)setPriority:(unsigned int)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setReadyForStore:(BOOL)arg1;
- (void)setStoreInfo:(id)arg1;
- (void)setStorePID:(long long)arg1;
- (void)setStorePlist:(id)arg1;
- (void)setTotalBytes:(unsigned long long)arg1;
- (void)setVariantOptions:(id)arg1;
- (id)shortDescription;
- (id)storeInfo;
- (long long)storePID;
- (id)storePlist;
- (unsigned long long)totalBytes;
- (id)variantOptions;

@end
