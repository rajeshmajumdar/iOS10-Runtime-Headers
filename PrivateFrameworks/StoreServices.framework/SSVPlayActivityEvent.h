/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlayActivityEvent : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL  _SBEnabled;
    NSString * _containerID;
    unsigned int  _containerType;
    NSString * _deviceName;
    unsigned int  _endReasonType;
    NSDate * _eventDate;
    NSTimeZone * _eventTimeZone;
    NSString * _externalID;
    NSString * _featureName;
    double  _itemDuration;
    double  _itemEndTime;
    double  _itemStartTime;
    unsigned int  _itemType;
    unsigned int  _mediaType;
    BOOL  _offline;
    long long  _persistentID;
    NSString * _personalizedContainerID;
    NSData * _recommendationData;
    unsigned int  _sourceType;
    unsigned long long  _storeAccountID;
    NSString * _storeID;
    NSData * _timedMetadata;
    NSData * _trackInfo;
}

@property (getter=isSBEnabled, nonatomic, readonly) BOOL SBEnabled;
@property (nonatomic, readonly, copy) NSString *containerID;
@property (nonatomic, readonly) unsigned int containerType;
@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) unsigned int endReasonType;
@property (nonatomic, readonly, copy) NSDate *eventDate;
@property (nonatomic, readonly, copy) NSTimeZone *eventTimeZone;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly) double itemDuration;
@property (nonatomic, readonly) double itemEndTime;
@property (nonatomic, readonly) double itemStartTime;
@property (nonatomic, readonly) unsigned int itemType;
@property (nonatomic, readonly) unsigned int mediaType;
@property (getter=isOffline, nonatomic, readonly) BOOL offline;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly, copy) NSString *personalizedContainerID;
@property (nonatomic, readonly, copy) NSData *recommendationData;
@property (nonatomic, readonly) unsigned int sourceType;
@property (nonatomic, readonly) unsigned long long storeAccountID;
@property (nonatomic, readonly, copy) NSString *storeID;
@property (nonatomic, readonly, copy) NSData *timedMetadata;
@property (nonatomic, readonly, copy) NSData *trackInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)_mutableCopyClass;
- (id)containerID;
- (unsigned int)containerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endReasonType;
- (id)eventDate;
- (id)eventTimeZone;
- (id)externalID;
- (id)featureName;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOffline;
- (BOOL)isSBEnabled;
- (double)itemDuration;
- (double)itemEndTime;
- (double)itemStartTime;
- (unsigned int)itemType;
- (unsigned int)mediaType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)persistentID;
- (id)personalizedContainerID;
- (id)recommendationData;
- (unsigned int)sourceType;
- (unsigned long long)storeAccountID;
- (id)storeID;
- (id)timedMetadata;
- (id)trackInfo;

@end
