/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKAssetHandle : CKObject {
    NSString * _UUID;
    NSNumber * _deviceID;
    NSNumber * _fileID;
    NSNumber * _generationID;
    NSNumber * _itemID;
    NSNumber * _lastUsedTime;
    NSString * _path;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic, retain) NSNumber *fileID;
@property (nonatomic, retain) NSNumber *generationID;
@property (nonatomic, retain) NSNumber *itemID;
@property (nonatomic, retain) NSNumber *lastUsedTime;
@property (nonatomic, retain) NSString *path;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)UUID;
- (id)description;
- (id)deviceID;
- (id)fileID;
- (id)generationID;
- (id)initWithItemID:(id)arg1 UUID:(id)arg2 path:(id)arg3;
- (id)itemID;
- (id)lastUsedTime;
- (id)path;
- (void)setDeviceID:(id)arg1;
- (void)setFileID:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setLastUsedTime:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setUUID:(id)arg1;

@end
