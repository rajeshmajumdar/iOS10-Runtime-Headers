/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLSourceDeviceRecordSummary : NSObject {
    WLSourceDeviceAccount * _account;
    NSString * _dataFilePath;
    NSString * _identifier;
    unsigned int  _itemSize;
    NSDictionary * _metadata;
    NSDate * _modifiedDate;
    NSString * _relativePath;
    unsigned int  _sqlID;
    BOOL  _storeDataAsFile;
}

@property (nonatomic, retain) WLSourceDeviceAccount *account;
@property (nonatomic, copy) NSString *dataFilePath;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned int itemSize;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSDate *modifiedDate;
@property (nonatomic, copy) NSString *relativePath;
@property (nonatomic) unsigned int sqlID;
@property (nonatomic) BOOL storeDataAsFile;

+ (id)summaryWithInfo:(id)arg1 account:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)dataFilePath;
- (id)identifier;
- (id)initWithInfo:(id)arg1 account:(id)arg2;
- (unsigned int)itemSize;
- (id)metadata;
- (id)modifiedDate;
- (id)relativePath;
- (void)setAccount:(id)arg1;
- (void)setDataFilePath:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemSize:(unsigned int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModifiedDate:(id)arg1;
- (void)setRelativePath:(id)arg1;
- (void)setSqlID:(unsigned int)arg1;
- (void)setStoreDataAsFile:(BOOL)arg1;
- (unsigned int)sqlID;
- (BOOL)storeDataAsFile;

@end
